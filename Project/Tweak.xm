/*

FEATURES:

1. Enumerate a given cell with 1 - 9
2. Enumerate every single cell with 1 - 9
3. Reduce the possible values which a cell may have
4. Reduce the entire board to values which each cell may have
5. Solve a given cell
6. Solve the entire board
7. Check if selected box has correct number
8. Remove Advertisements

TODO:

- add compatibility with other devices (MEDIUM)
- add landscape AND portrait compatibility (MEDIUM)
- fix bugs
BUGS:

1. All user-added buttons cause a crash at the start of the game. To prevent this, select a random cell, then add a note and a number
2. Undo database acts wonky sometimes when using the extra buttons...
3. Reduction option is blind to conflicts -> it'll reduce a box even if the number is conflicted
NOTE:

INVARIANT: each cell can only have a single number appear ONCE, hence each number is unique for the given cell

The notes are stored in powers of 2 as follows:

0 =   0 = 2^0
1 =   2 = 2^1 
2 =   4 = 2^2
3 =   8 = 2^3
4 =  16 = 2^4
5 =  32 = 2^5
6 =  64 = 2^6
7 = 128 = 2^7
8 = 256 = 2^8
9 = 512 = 2^9

Ex. 544 will mean a cell has the notes 9 and 5, because 512 + 32 = 544

CREDITS:

- Alphamatter (Coding)
- Razzile (CDAnonymousStruct2)
- RickHaks (sharedInstance trick)
*/

#define cre @"Modded By αlphaMΛTTΞR"
#define extra @"Special Thanks To Razzile and RickHaks"
#define kBundlePath @"/Library/MobileSubstrate/DynamicLibraries/sudokuResources.bundle"
UIView *adView, *hookedView;
UIButton *enumerateBtn, *enumerateAllBtn, *reduceOptionsBtn, *solveCellBtn, *reduceAllBtn, *solveAllBtn, *checkCellBtn;

UIImage *enumerateUpImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/Enumerate_Up" ofType:@"png"]];
UIImage *enumerateAllUpImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/EnumerateAll_Up" ofType:@"png"]];
UIImage *reduceUpImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/Reduce_Up" ofType:@"png"]];
UIImage *reduceAllUpImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/ReduceAll_Up" ofType:@"png"]];
UIImage *solveCellUpImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/SolveCell_Up" ofType:@"png"]];
UIImage *solveAllUpImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/SolveAll_Up" ofType:@"png"]];
UIImage *checkCellUpImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Wide/CheckCell_Up" ofType:@"png"]];

UIImage *enumerateDownImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/Enumerate_Down" ofType:@"png"]];
UIImage *enumerateAllDownImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/EnumerateAll_Down" ofType:@"png"]];
UIImage *reduceDownImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/Reduce_Down" ofType:@"png"]];
UIImage *reduceAllDownImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/ReduceAll_Down" ofType:@"png"]];
UIImage *solveCellDownImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/SolveCell_Down" ofType:@"png"]];
UIImage *solveAllDownImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Narrow/SolveAll_Down" ofType:@"png"]];
UIImage *checkCellDownImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/Wide/CheckCell_Down" ofType:@"png"]];

UIImage *good = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/CheckCorrect/Good" ofType:@"png"]];
UIImage *bad = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/CheckCorrect/Bad" ofType:@"png"]];
UIImage *original = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"/CheckCorrect/Original" ofType:@"png"]];

id sharedInstance = nil;

CGRect screenRect = [[UIScreen mainScreen] bounds];

typedef struct {
    unsigned char correct; // Correct Value
    unsigned char entered; // User Entered Value, 0 if empty
    char given;            // Boolean -> Is this auto-filled at start of game
    unsigned short notes;  // Annotations on the cell, see NOTE at top for explaination
    unsigned char color;   // NO CLUE!
} CDAnonymousStruct2;

%hook SudokuAppDelegate

- (char)application:(id)fp8 didFinishLaunchingWithOptions:(id)fp12 {
	
	UIAlertView *popup = [[UIAlertView alloc] initWithTitle:cre message:extra delegate:self cancelButtonTitle:@"Okay" otherButtonTitles:nil,nil];
	[popup show];
	[popup release];
	return %orig;
}

%end

%hook GameViewController
- (void)viewDidLoad {		
	adView = MSHookIvar<UIView*>(self, "adView");
	adView.hidden = YES;
	
	hookedView = MSHookIvar<UIView*>(self, "floatingView");

	UILabel *credits = [[UILabel alloc] initWithFrame:CGRectMake(screenRect.size.width / 2 - 75, 3.0, 150.0, 43.0)];
	credits.text = cre;
	credits.textAlignment =  UITextAlignmentCenter;
	credits.textColor = [UIColor whiteColor];
	credits.backgroundColor = [UIColor clearColor];
	credits.font = [UIFont fontWithName:@"Arial Rounded MT Bold" size:(12.0)];
	[hookedView addSubview:credits];
	
	enumerateBtn = [UIButton buttonWithType:UIButtonTypeCustom];
	[enumerateBtn setTitle:nil forState:UIControlStateNormal];
	[enumerateBtn addTarget:sharedInstance action:@selector(enumerate) forControlEvents:UIControlEventTouchDown];
	enumerateBtn.frame = CGRectMake(10,915,86,79);
	[enumerateBtn setBackgroundImage:enumerateUpImg forState:UIControlStateNormal];
	[enumerateBtn setBackgroundImage:enumerateDownImg forState:UIControlEventTouchDown];
	[hookedView addSubview:enumerateBtn];
	
	enumerateAllBtn = [UIButton buttonWithType:UIButtonTypeCustom];
	[enumerateAllBtn setTitle:nil forState:UIControlStateNormal];
	[enumerateAllBtn addTarget:sharedInstance action:@selector(enumerateAll) forControlEvents:UIControlEventTouchDown];
	enumerateAllBtn.frame = CGRectMake(105,915,86,79);
	[enumerateAllBtn setBackgroundImage:enumerateAllUpImg forState:UIControlStateNormal];
	[enumerateAllBtn setBackgroundImage:enumerateAllDownImg forState:UIControlEventTouchDown];
	[hookedView addSubview:enumerateAllBtn];
	
	reduceOptionsBtn = [UIButton buttonWithType:UIButtonTypeCustom];
	[reduceOptionsBtn setTitle:nil forState:UIControlStateNormal];
	[reduceOptionsBtn addTarget:sharedInstance action:@selector(reduceOptions) forControlEvents:UIControlEventTouchDown];
	reduceOptionsBtn.frame = CGRectMake(198,915,86,79);
	[reduceOptionsBtn setBackgroundImage:reduceUpImg forState:UIControlStateNormal];
	[reduceOptionsBtn setBackgroundImage:reduceDownImg forState:UIControlEventTouchDown];
	[hookedView addSubview:reduceOptionsBtn];
	
	reduceAllBtn = [UIButton buttonWithType:UIButtonTypeCustom];
	[reduceAllBtn setTitle:nil forState:UIControlStateNormal];
	[reduceAllBtn addTarget:sharedInstance action:@selector(reduceAll) forControlEvents:UIControlEventTouchDown];
	reduceAllBtn.frame = CGRectMake(292,915,86,79);
	[reduceAllBtn setBackgroundImage:reduceAllUpImg forState:UIControlStateNormal];
	[reduceAllBtn setBackgroundImage:reduceAllDownImg forState:UIControlEventTouchDown];
	[hookedView addSubview:reduceAllBtn];
	
	solveCellBtn = [UIButton buttonWithType:UIButtonTypeCustom];
	[solveCellBtn setTitle:nil forState:UIControlStateNormal];
	[solveCellBtn addTarget:sharedInstance action:@selector(solveCell) forControlEvents:UIControlEventTouchDown];
	solveCellBtn.frame = CGRectMake(386,915,86,79);
	[solveCellBtn setBackgroundImage:solveCellUpImg forState:UIControlStateNormal];
	[solveCellBtn setBackgroundImage:solveCellDownImg forState:UIControlEventTouchDown];
	[hookedView addSubview:solveCellBtn];
	
	solveAllBtn = [UIButton buttonWithType:UIButtonTypeCustom];
	[solveAllBtn setTitle:nil forState:UIControlStateNormal];
	[solveAllBtn addTarget:sharedInstance action:@selector(solveAll) forControlEvents:UIControlEventTouchDown];
	solveAllBtn.frame = CGRectMake(481,915,86,79);
	[solveAllBtn setBackgroundImage:solveAllUpImg forState:UIControlStateNormal];
	[solveAllBtn setBackgroundImage:solveAllDownImg forState:UIControlEventTouchDown];
	[hookedView addSubview:solveAllBtn];
	
	checkCellBtn = [UIButton buttonWithType:UIButtonTypeCustom];
	[checkCellBtn setTitle:nil forState:UIControlStateNormal];
	[checkCellBtn addTarget:self action:@selector(checkCell) forControlEvents:UIControlEventTouchDown];
	checkCellBtn.frame = CGRectMake(575,915,181,79);
	[checkCellBtn setBackgroundImage:checkCellUpImg forState:UIControlStateNormal];
	[checkCellBtn setBackgroundImage:checkCellDownImg forState:UIControlEventTouchDown];
	[hookedView addSubview:checkCellBtn];
	
	%orig;
}

- (void)adViewDidLoadAd:(id)fp8 {
}

- (void)cellTouched:(int)cell {
	[*&MSHookIvar<UIButton*>(self, "btn1") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn2") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn3") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn4") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn5") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn6") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn7") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn8") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	[*&MSHookIvar<UIButton*>(self, "btn9") setTitleColor:[UIColor colorWithRed:10/255.0 green:96/255.0 blue:146/255.0 alpha:1.0] forState:UIControlStateNormal];
	
	%orig(cell);
}

%new
- (void)checkCell {
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[sharedInstance performSelector:@selector(cells)]; //all cell values
	int selected = (int)[sharedInstance performSelector:@selector(selection)];
	
	if (allVals[selected].entered != allVals[selected].correct && allVals[selected].entered != 0 && allVals[selected].notes == 0) {
		
		[*&MSHookIvar<UIButton*>(self, "btn1") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn2") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn3") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn4") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn5") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn6") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn7") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn8") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn9") setTitleColor:[UIColor colorWithRed:204/255.0 green:0/255.0 blue:0/255.0 alpha:1.0] forState:UIControlStateNormal];
		
	} else if (allVals[selected].entered == allVals[selected].correct) {
		
		[*&MSHookIvar<UIButton*>(self, "btn1") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn2") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn3") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn4") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn5") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn6") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn7") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn8") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
		[*&MSHookIvar<UIButton*>(self, "btn9") setTitleColor:[UIColor colorWithRed:73.95/255.0 green:226.95/255.0 blue:12.75/255.0 alpha:1.0] forState:UIControlStateNormal];
	}
}

%end

%hook GameState

- (void)toggleNoteOnCell:(int)cell forNumber:(int)num {
	%orig(cell, num);
}

- (void)fillCell:(int)cell withNumber:(int)num {
	%orig(cell, num);
}

- (CDAnonymousStruct2 *)cells {
	return %orig;
}

- (char *)conflicts {
	return %orig;
}

- (int)selection {
	
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)];
	char *conflicts = (char *)[self performSelector:@selector(conflicts)];
	
	NSLog(@"cell: %i || correct: %i || entered: %i ||  given: %i ||  notes: %hi ||  color: %i || conflict: %i", %orig,
																												allVals[%orig].correct,
																												allVals[%orig].entered,
																												allVals[%orig].given,
																												allVals[%orig].notes,
																												allVals[%orig].color,
																												conflicts[%orig]);																			
	return %orig;
}

- (id)init {
	sharedInstance = %orig();
	return %orig;
}

- (void)setColor:(int)col forCell:(int)cell{
	%orig(col, cell);
}

- (BOOL)removeNoteForNumber:(int)num fromCell:(int)cell {
	return %orig;
}

%new
- (void)enumerate {
	
	[self performSelector:@selector(clearCell:) withObject:[self performSelector:@selector(selection)]];
	
	for (int x = 1; x <= 9; x++) {
		int cell = (int)[self performSelector:@selector(selection)];
		int num = x;
		[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)cell withObject:(id)num];
	}
	[self performSelector:@selector(updateConflicts)];
}

%new
- (void)enumerateAll {
	
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)];
	
	for (int y = 0; y < 81; y++) {
		if (allVals[y].entered == 0) {
			
			[self performSelector:@selector(clearCell:) withObject:(id)y];
			for (int x = 1; x <= 9; x++) {
				int cell = y;
				int num = x;
				[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)cell withObject:(id)num];
			}
		}
	}
	[self performSelector:@selector(updateConflicts)];
}

%new
-(void)solveCell {
	
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)];
	int selected = (int)[self performSelector:@selector(selection)];
	int correctCellVal = allVals[selected].correct;
	
	[self performSelector:@selector(fillCell:withNumber:) withObject:(id)selected withObject:(id)correctCellVal];
	//struct CDAnonymousStruct2 oldCell = [self performSelector:@selector(selection)];
}

%new
-(void)solveAll {
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)];
	
	for (int y = 0; y < 81; y++) {
		int cell = y;
		int correctCellVal = allVals[y].correct;
		[self performSelector:@selector(fillCell:withNumber:) withObject:(id)cell withObject:(id)correctCellVal];
	}
}

%new
- (void)reduceOptions {
	[self performSelector:@selector(enumerate)];
	
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)]; //all cell values
	char *conflicts = (char *)[self performSelector:@selector(conflicts)]; // checks for duplicates
	
	/* LIST OF ALL 27 SUDOKU BOXES
	NOTE: You could technically do this all without any usage of 2D arrays, however in doing so, clarity of how the program works is lost*/
	
	CDAnonymousStruct2 rows[9][9] = {{allVals[0], allVals[1], allVals[2], allVals[3], allVals[4], allVals[5], allVals[6], allVals[7], allVals[8]},
									{allVals[9], allVals[10], allVals[11], allVals[12], allVals[13], allVals[14], allVals[15], allVals[16], allVals[17]},
									{allVals[18], allVals[19], allVals[20], allVals[21], allVals[22], allVals[23], allVals[24], allVals[25], allVals[26]},
									{allVals[27], allVals[28], allVals[29], allVals[30], allVals[31], allVals[32], allVals[33], allVals[34], allVals[35]},
									{allVals[36], allVals[37], allVals[38], allVals[39], allVals[40], allVals[41], allVals[42], allVals[43], allVals[44]},
									{allVals[45], allVals[46], allVals[47], allVals[48], allVals[49], allVals[50], allVals[51], allVals[52], allVals[53]},
									{allVals[54], allVals[55], allVals[56], allVals[57], allVals[58], allVals[59], allVals[60], allVals[61], allVals[62]},
									{allVals[63], allVals[64], allVals[65], allVals[66], allVals[67], allVals[68], allVals[69], allVals[70], allVals[71]},
									{allVals[72], allVals[73], allVals[74], allVals[75], allVals[76], allVals[77], allVals[78], allVals[79], allVals[80]}};
	
	// cols = rows^T
	CDAnonymousStruct2 cols[9][9] = {{allVals[0], allVals[9], allVals[18], allVals[27], allVals[36], allVals[45], allVals[54], allVals[63], allVals[72]},
									{allVals[1], allVals[10], allVals[19], allVals[28], allVals[37], allVals[46], allVals[55], allVals[64], allVals[73]},
									{allVals[2], allVals[11], allVals[20], allVals[29], allVals[38], allVals[47], allVals[56], allVals[65], allVals[74]},
									{allVals[3], allVals[12], allVals[21], allVals[30], allVals[39], allVals[48], allVals[57], allVals[66], allVals[75]},
									{allVals[4], allVals[13], allVals[22], allVals[31], allVals[40], allVals[49], allVals[58], allVals[67], allVals[76]},
									{allVals[5], allVals[14], allVals[23], allVals[32], allVals[41], allVals[50], allVals[59], allVals[68], allVals[77]},
									{allVals[6], allVals[15], allVals[24], allVals[33], allVals[42], allVals[51], allVals[60], allVals[69], allVals[78]},
									{allVals[7], allVals[16], allVals[25], allVals[34], allVals[43], allVals[52], allVals[61], allVals[70], allVals[79]},
									{allVals[8], allVals[17], allVals[26], allVals[35], allVals[44], allVals[53], allVals[62], allVals[71], allVals[80]}};
									
	CDAnonymousStruct2 boxs[9][9] = {{allVals[0], allVals[1], allVals[2], allVals[9], allVals[10], allVals[11], allVals[18], allVals[19], allVals[20]},
									{allVals[3], allVals[4], allVals[5], allVals[12], allVals[13], allVals[14], allVals[21], allVals[22], allVals[23]},
									{allVals[6], allVals[7], allVals[8], allVals[15], allVals[16], allVals[17], allVals[24], allVals[25], allVals[26]},
									{allVals[27], allVals[28], allVals[29], allVals[36], allVals[37], allVals[38], allVals[45], allVals[46], allVals[47]},
									{allVals[30], allVals[31], allVals[32], allVals[39], allVals[40], allVals[41], allVals[48], allVals[49], allVals[50]},
									{allVals[33], allVals[34], allVals[35], allVals[42], allVals[43], allVals[44], allVals[51], allVals[52], allVals[53]},
									{allVals[54], allVals[55], allVals[56], allVals[63], allVals[64], allVals[65], allVals[72], allVals[73], allVals[74]},
									{allVals[57], allVals[58], allVals[59], allVals[66], allVals[67], allVals[68], allVals[75], allVals[76], allVals[77]},
									{allVals[60], allVals[61], allVals[62], allVals[69], allVals[70], allVals[71], allVals[78], allVals[79], allVals[80]}};

	int selected = (int)[self performSelector:@selector(selection)];
	CGPoint rowCol = {floor(selected / 9), (selected % 9)}; // convert linear notation to Cartesian point
	
	/*
		XXXX -> XXXX[row][col]
		ROWS -> rows[X][1-9]
		COLS -> cols[1-9][X]
		BOXS -> boxs[X][X]
	*/
	
	/* Reduce Options For Rows */
	for (int z = 0; z < 9; z++) {
		if (rows[(int)rowCol.x][z].entered != 0 && rows[(int)rowCol.x][z].given != 1 && !conflicts[(int)(rowCol.x * 9 + z)]) {
			// Cell Is Number
			[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)rows[(int)rowCol.x][z].entered withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
		} else if (rows[(int)rowCol.x][z].given == 1 && !conflicts[(int)(rowCol.x * 9 + z)]) {
			[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)rows[(int)rowCol.x][z].correct withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
		}
	}
	
	/* Reduce Options For Cols */
	for (int z = 0; z < 9; z++) {
		if (cols[(int)rowCol.y][z].entered != 0 && cols[(int)rowCol.y][z].given != 1 && !conflicts[(int)(rowCol.y * 9 + z)]) {
			// Cell Is Number
			[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)cols[(int)rowCol.y][z].entered withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
		} else if (cols[(int)rowCol.y][z].given == 1 && !conflicts[(int)(rowCol.y * 9 + z)]) {
			[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)cols[(int)rowCol.y][z].correct withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
		}
	}
	

	/* Reduce Options For Boxs */
	// Fuck this is disgustingly done... Need to make this nicer and cleaner
	int box;
	if ( (0 <= rowCol.x && rowCol.x < 3) && (0 <= rowCol.y && rowCol.y < 3) ) {
		NSLog(@"Box 0");
		box = 0;
	} else if ( (0 <= rowCol.x && rowCol.x < 3) && (3 <= rowCol.y && rowCol.y < 6) ) {
		NSLog(@"Box 1");
		box = 1;
	} if ( (0 <= rowCol.x && rowCol.x < 3) && (6 <= rowCol.y && rowCol.y < 9) ) {
		NSLog(@"Box 2");
		box = 2;
	} else if ( (3 <= rowCol.x && rowCol.x < 6) && (0 <= rowCol.y && rowCol.y < 3) ) {
		NSLog(@"Box 3");
		box = 3;
	} else if ( (3 <= rowCol.x && rowCol.x < 6) && (3 <= rowCol.y && rowCol.y < 6) ) {
		NSLog(@"Box 4");
		box = 4;
	} else if ( (3 <= rowCol.x && rowCol.x < 6) && (6 <= rowCol.y && rowCol.y < 9) ) {
		NSLog(@"Box 5");
		box = 5;
	} else if ( (6 <= rowCol.x && rowCol.x < 9) && (0 <= rowCol.y && rowCol.y < 3) ) {
		NSLog(@"Box 6");
		box = 6;
	} else if ( (6 <= rowCol.x && rowCol.x < 9) && (3 <= rowCol.y && rowCol.y < 6) ) {
		NSLog(@"Box 7");
		box = 7;
	} else if ( (6 <= rowCol.x && rowCol.x < 9) && (6 <= rowCol.y && rowCol.y < 9) ) {
		NSLog(@"Box 8");
		box = 8;
	}
	
	for (int z = 0; z < 9; z++) {
		if (boxs[box][z].entered != 0 && boxs[box][z].given != 1) {// && !conflicts[(int)(rowCol.y * 9 + z)]
			[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)boxs[box][z].entered withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
		} else if (boxs[box][z].given == 1) { //&& !conflicts[(int)(rowCol.y * 9 + z)]
			[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)boxs[box][z].correct withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
		}
	}	
}

%new
- (void)reduceAll {
	[self performSelector:@selector(enumerateAll)];
	
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)]; //all cell values
	char *conflicts = (char *)[self performSelector:@selector(conflicts)]; // checks for duplicates
	
	/* LIST OF ALL 27 SUDOKU BOXES
	NOTE: You could technically do this all without any usage of 2D arrays, however in doing so, clarity of how the program works is lost*/
	
	CDAnonymousStruct2 rows[9][9] = {{allVals[0], allVals[1], allVals[2], allVals[3], allVals[4], allVals[5], allVals[6], allVals[7], allVals[8]},
									{allVals[9], allVals[10], allVals[11], allVals[12], allVals[13], allVals[14], allVals[15], allVals[16], allVals[17]},
									{allVals[18], allVals[19], allVals[20], allVals[21], allVals[22], allVals[23], allVals[24], allVals[25], allVals[26]},
									{allVals[27], allVals[28], allVals[29], allVals[30], allVals[31], allVals[32], allVals[33], allVals[34], allVals[35]},
									{allVals[36], allVals[37], allVals[38], allVals[39], allVals[40], allVals[41], allVals[42], allVals[43], allVals[44]},
									{allVals[45], allVals[46], allVals[47], allVals[48], allVals[49], allVals[50], allVals[51], allVals[52], allVals[53]},
									{allVals[54], allVals[55], allVals[56], allVals[57], allVals[58], allVals[59], allVals[60], allVals[61], allVals[62]},
									{allVals[63], allVals[64], allVals[65], allVals[66], allVals[67], allVals[68], allVals[69], allVals[70], allVals[71]},
									{allVals[72], allVals[73], allVals[74], allVals[75], allVals[76], allVals[77], allVals[78], allVals[79], allVals[80]}};
	
	// cols = rows^T
	CDAnonymousStruct2 cols[9][9] = {{allVals[0], allVals[9], allVals[18], allVals[27], allVals[36], allVals[45], allVals[54], allVals[63], allVals[72]},
									{allVals[1], allVals[10], allVals[19], allVals[28], allVals[37], allVals[46], allVals[55], allVals[64], allVals[73]},
									{allVals[2], allVals[11], allVals[20], allVals[29], allVals[38], allVals[47], allVals[56], allVals[65], allVals[74]},
									{allVals[3], allVals[12], allVals[21], allVals[30], allVals[39], allVals[48], allVals[57], allVals[66], allVals[75]},
									{allVals[4], allVals[13], allVals[22], allVals[31], allVals[40], allVals[49], allVals[58], allVals[67], allVals[76]},
									{allVals[5], allVals[14], allVals[23], allVals[32], allVals[41], allVals[50], allVals[59], allVals[68], allVals[77]},
									{allVals[6], allVals[15], allVals[24], allVals[33], allVals[42], allVals[51], allVals[60], allVals[69], allVals[78]},
									{allVals[7], allVals[16], allVals[25], allVals[34], allVals[43], allVals[52], allVals[61], allVals[70], allVals[79]},
									{allVals[8], allVals[17], allVals[26], allVals[35], allVals[44], allVals[53], allVals[62], allVals[71], allVals[80]}};
									
	CDAnonymousStruct2 boxs[9][9] = {{allVals[0], allVals[1], allVals[2], allVals[9], allVals[10], allVals[11], allVals[18], allVals[19], allVals[20]},
									{allVals[3], allVals[4], allVals[5], allVals[12], allVals[13], allVals[14], allVals[21], allVals[22], allVals[23]},
									{allVals[6], allVals[7], allVals[8], allVals[15], allVals[16], allVals[17], allVals[24], allVals[25], allVals[26]},
									{allVals[27], allVals[28], allVals[29], allVals[36], allVals[37], allVals[38], allVals[45], allVals[46], allVals[47]},
									{allVals[30], allVals[31], allVals[32], allVals[39], allVals[40], allVals[41], allVals[48], allVals[49], allVals[50]},
									{allVals[33], allVals[34], allVals[35], allVals[42], allVals[43], allVals[44], allVals[51], allVals[52], allVals[53]},
									{allVals[54], allVals[55], allVals[56], allVals[63], allVals[64], allVals[65], allVals[72], allVals[73], allVals[74]},
									{allVals[57], allVals[58], allVals[59], allVals[66], allVals[67], allVals[68], allVals[75], allVals[76], allVals[77]},
									{allVals[60], allVals[61], allVals[62], allVals[69], allVals[70], allVals[71], allVals[78], allVals[79], allVals[80]}};

	
	for (int z = 0; z < 81; z++) {
		CGPoint rowCol = {floor(z / 9), (z % 9)}; // convert linear notation to Cartesian point
		
		/*
			XXXX -> XXXX[row][col]
			ROWS -> rows[X][1-9]
			COLS -> cols[1-9][X]
			BOXS -> boxs[X][X]
		*/
		
		/* Reduce Options For Rows */
		for (int z = 0; z < 9; z++) {
			if (rows[(int)rowCol.x][z].entered != 0 && rows[(int)rowCol.x][z].given != 1 && !conflicts[(int)(rowCol.x * 9 + z)]) {
				// Cell Is Number
				[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)rows[(int)rowCol.x][z].entered withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
			} else if (rows[(int)rowCol.x][z].given == 1 && !conflicts[(int)(rowCol.x * 9 + z)]) {
				[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)rows[(int)rowCol.x][z].correct withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
			}
		}
		
		/* Reduce Options For Cols */
		for (int z = 0; z < 9; z++) {
			if (cols[(int)rowCol.y][z].entered != 0 && cols[(int)rowCol.y][z].given != 1 && !conflicts[(int)(rowCol.y * 9 + z)]) {
				// Cell Is Number
				[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)cols[(int)rowCol.y][z].entered withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
			} else if (cols[(int)rowCol.y][z].given == 1 && !conflicts[(int)(rowCol.y * 9 + z)]) {
				[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)cols[(int)rowCol.y][z].correct withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
			}
		}
		

		/* Reduce Options For Boxs */
		// Fuck this is disgustingly done... Need to make this nicer and cleaner
		int box;
		if ( (0 <= rowCol.x && rowCol.x < 3) && (0 <= rowCol.y && rowCol.y < 3) ) {
			NSLog(@"Box 0");
			box = 0;
		} else if ( (0 <= rowCol.x && rowCol.x < 3) && (3 <= rowCol.y && rowCol.y < 6) ) {
			NSLog(@"Box 1");
			box = 1;
		} if ( (0 <= rowCol.x && rowCol.x < 3) && (6 <= rowCol.y && rowCol.y < 9) ) {
			NSLog(@"Box 2");
			box = 2;
		} else if ( (3 <= rowCol.x && rowCol.x < 6) && (0 <= rowCol.y && rowCol.y < 3) ) {
			NSLog(@"Box 3");
			box = 3;
		} else if ( (3 <= rowCol.x && rowCol.x < 6) && (3 <= rowCol.y && rowCol.y < 6) ) {
			NSLog(@"Box 4");
			box = 4;
		} else if ( (3 <= rowCol.x && rowCol.x < 6) && (6 <= rowCol.y && rowCol.y < 9) ) {
			NSLog(@"Box 5");
			box = 5;
		} else if ( (6 <= rowCol.x && rowCol.x < 9) && (0 <= rowCol.y && rowCol.y < 3) ) {
			NSLog(@"Box 6");
			box = 6;
		} else if ( (6 <= rowCol.x && rowCol.x < 9) && (3 <= rowCol.y && rowCol.y < 6) ) {
			NSLog(@"Box 7");
			box = 7;
		} else if ( (6 <= rowCol.x && rowCol.x < 9) && (6 <= rowCol.y && rowCol.y < 9) ) {
			NSLog(@"Box 8");
			box = 8;
		}
		
		for (int z = 0; z < 9; z++) {
			if (boxs[box][z].entered != 0 && boxs[box][z].given != 1) {// && !conflicts[(int)(rowCol.y * 9 + z)]
				[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)boxs[box][z].entered withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
			} else if (boxs[box][z].given == 1) { //&& !conflicts[(int)(rowCol.y * 9 + z)]
				[self performSelector:@selector(removeNoteForNumber:fromCell:) withObject:(id)(int)boxs[box][z].correct withObject:(id)(int)(rowCol.x * 9 + rowCol.y)];
			}
		}
	}
}

%new  //NOT USED
-(CGPoint)convertToPoint:(int)cell {
	/*
	  EXAMPLES: Cell # = (row, col)
				Cell  0 = (0,0)
				Cell 80 = (8,8)
				Cell 18 = (2,0)
				Cell 32 = (3,5)
				Cell 41 = (3,5)
	*/
	int row = floor(cell / 9);
	int col = cell % 9;
	
	return CGPointMake(row,col);
	
}

%end

/* REMOVE ADS */

%hook MPBannerAdManager
- (void)customEventActionWillBegin {
}
- (void)customEventDidLoadAd {
}
- (id)bannerDelegate {
	return nil;
}
- (id)banner {
	return nil;
}
- (void)loadAd {
}
- (BOOL)loading {
	return false;
}
- (id)initWithDelegate:(id)fp8 {
	return nil;
}
%end