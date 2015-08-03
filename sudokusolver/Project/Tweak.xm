/*

FEATURES:

1. Enumerate a given cell with 1 - 9
2. Enumerate every single cell with 1 - 9
3. Reduce the possible values which a cell may have
4. Reduce the entire board to values which each cell may have
5. Solve a given cell
6. Solve the entire board
7. Check if selected box has correct number
8. Check if all boxes have correct numbers
9. Remove Advertisements

TODO:

- implement feature 3 (HARD)
- implement feature 4 (HARD)
- implement feature 7 (EASY)
- implement feature 8 (EASY)
- add compatibility with other devices (MEDIUM)
- add landscape AND portrait compatibility (MEDIUM)

BUGS:

1. All user-added buttons cause a crash at the start of the game. To prevent this, select a random cell, then add a note and a number
2. Undo database acts wonky sometimes when using the extra buttons...

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

#define cre @"Hacked By αlphaMΛTTΞR"
#define kBundlePath @"/Library/MobileSubstrate/DynamicLibraries/sudokuResources.bundle"
UIView *adView, *hookedView;
UIButton *enumerateBtn, *enumerateAllBtn, *reduceOptionsBtn, *solveCellBtn, *reduceAllBtn, *solveAllBtn, *checkCellBtn, *checkAllBtn;

CGRect screenRect = [[UIScreen mainScreen] bounds];

UIImage *enumerateImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"Enumerate" ofType:@"png"]];
UIImage *enumerateAllImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"EnumerateAll" ofType:@"png"]];
UIImage *reduceImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"Reduce" ofType:@"png"]];
UIImage *reduceAllImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"ReduceAll" ofType:@"png"]];
UIImage *solveCellImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"SolveCell" ofType:@"png"]];
UIImage *solveAllImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"SolveAll" ofType:@"png"]];
UIImage *checkCellImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"CheckCell" ofType:@"png"]];
UIImage *checkAllImg = [UIImage imageWithContentsOfFile:[[[NSBundle alloc] initWithPath:kBundlePath] pathForResource:@"CheckAll" ofType:@"png"]];

id sharedInstance = nil;

typedef struct {
    unsigned char correct; // Correct Value
    unsigned char entered; // User Entered Value, 0 if empty
    char given;            // Boolean -> Is this auto-filled at start of game
    unsigned short notes;  // Annotations on the cell, see NOTE at top for explaination
    unsigned char color;   //NO CLUE!
} CDAnonymousStruct2;

%hook SudokuAppDelegate

- (char)application:(id)fp8 didFinishLaunchingWithOptions:(id)fp12 {
	
	UIAlertView *popup = [[UIAlertView alloc] initWithTitle:cre message:@"" delegate:self cancelButtonTitle:@"Okay" otherButtonTitles:nil,nil];
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

	enumerateBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[enumerateBtn setTitle:nil forState:UIControlStateNormal];
	[enumerateBtn addTarget:sharedInstance action:@selector(enumerate) forControlEvents:UIControlEventTouchDown];
	enumerateBtn.frame = CGRectMake(10,915,86,79);
	[enumerateBtn setBackgroundImage:enumerateImg forState:UIControlStateNormal];
	[hookedView addSubview:enumerateBtn];
	
	enumerateAllBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[enumerateAllBtn setTitle:nil forState:UIControlStateNormal];
	[enumerateAllBtn addTarget:sharedInstance action:@selector(enumerateAll) forControlEvents:UIControlEventTouchDown];
	enumerateAllBtn.frame = CGRectMake(105,915,86,79);
	[enumerateAllBtn setBackgroundImage:enumerateAllImg forState:UIControlStateNormal];
	[hookedView addSubview:enumerateAllBtn];
	
	reduceOptionsBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[reduceOptionsBtn setTitle:nil forState:UIControlStateNormal];
	[reduceOptionsBtn addTarget:sharedInstance action:@selector(reduceOptions) forControlEvents:UIControlEventTouchDown];
	reduceOptionsBtn.frame = CGRectMake(198,915,86,79);
	[reduceOptionsBtn setBackgroundImage:reduceImg forState:UIControlStateNormal];
	[hookedView addSubview:reduceOptionsBtn];
	
	reduceAllBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[reduceAllBtn setTitle:nil forState:UIControlStateNormal];
	[reduceAllBtn addTarget:sharedInstance action:@selector(reduceAll) forControlEvents:UIControlEventTouchDown];
	reduceAllBtn.frame = CGRectMake(292,915,86,79);
	[reduceAllBtn setBackgroundImage:reduceAllImg forState:UIControlStateNormal];
	[hookedView addSubview:reduceAllBtn];
	
	solveCellBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[solveCellBtn setTitle:nil forState:UIControlStateNormal];
	[solveCellBtn addTarget:sharedInstance action:@selector(solveCell) forControlEvents:UIControlEventTouchDown];
	solveCellBtn.frame = CGRectMake(386,915,86,79);
	[solveCellBtn setBackgroundImage:solveCellImg forState:UIControlStateNormal];
	[hookedView addSubview:solveCellBtn];
	
	solveAllBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[solveAllBtn setTitle:nil forState:UIControlStateNormal];
	[solveAllBtn addTarget:sharedInstance action:@selector(solveAll) forControlEvents:UIControlEventTouchDown];
	solveAllBtn.frame = CGRectMake(481,915,86,79);
	[solveAllBtn setBackgroundImage:solveAllImg forState:UIControlStateNormal];
	[hookedView addSubview:solveAllBtn];
	
	checkCellBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[checkCellBtn setTitle:nil forState:UIControlStateNormal];
	[checkCellBtn addTarget:sharedInstance action:@selector(checkCell) forControlEvents:UIControlEventTouchDown];
	checkCellBtn.frame = CGRectMake(575,915,86,79);
	[checkCellBtn setBackgroundImage:checkCellImg forState:UIControlStateNormal];
	[hookedView addSubview:checkCellBtn];
	
	checkAllBtn = [UIButton buttonWithType:UIButtonTypeSystem];
	[checkAllBtn setTitle:nil forState:UIControlStateNormal];
	[checkAllBtn addTarget:sharedInstance action:@selector(checkAll) forControlEvents:UIControlEventTouchDown];
	checkAllBtn.frame = CGRectMake(670,915,86,79);
	[checkAllBtn setBackgroundImage:checkAllImg forState:UIControlStateNormal];
	[hookedView addSubview:checkAllBtn];
	
	%orig;
}

- (void)adViewDidLoadAd:(id)fp8 {
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

- (int)selection {
	
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)];
	NSLog(@"correct: %i || entered: %i ||  given: %i ||  notes: %hi ||  color: %i", allVals[%orig].correct,
																					allVals[%orig].entered,
																					allVals[%orig].given,
																					allVals[%orig].notes,
																					allVals[%orig].color);		
																					
	return %orig;
}

- (id)init {
	sharedInstance = %orig();
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
	
	CDAnonymousStruct2 *allVals = (CDAnonymousStruct2 *)[self performSelector:@selector(cells)];
	
	/* LIST OF ALL 27 SUDOKU BOXES*/
	
	CDAnonymousStruct2 rows[9][9] = {{allVals[0], allVals[1], allVals[2], allVals[3], allVals[4], allVals[5], allVals[6], allVals[7], allVals[8]},
									{allVals[9], allVals[10], allVals[11], allVals[12], allVals[13], allVals[14], allVals[15], allVals[16], allVals[17]},
									{allVals[18], allVals[19], allVals[20], allVals[21], allVals[22], allVals[23], allVals[24], allVals[25], allVals[26]},
									{allVals[27], allVals[28], allVals[29], allVals[30], allVals[31], allVals[32], allVals[33], allVals[34], allVals[35]},
									{allVals[36], allVals[37], allVals[38], allVals[39], allVals[40], allVals[41], allVals[42], allVals[43], allVals[44]},
									{allVals[45], allVals[46], allVals[47], allVals[48], allVals[49], allVals[50], allVals[51], allVals[52], allVals[53]},
									{allVals[54], allVals[55], allVals[56], allVals[57], allVals[58], allVals[59], allVals[60], allVals[61], allVals[62]},
									{allVals[63], allVals[64], allVals[65], allVals[66], allVals[67], allVals[68], allVals[69], allVals[70], allVals[71]},
									{allVals[72], allVals[73], allVals[74], allVals[75], allVals[76], allVals[77], allVals[78], allVals[79], allVals[80]}};
									
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
		BOXS -> boxs[][]
	*/
	
	/* Reduce Options For Rows */
	
	for (int z = 0; z < 9; z++) {
		if (rows[(int)rowCol.x][z].entered != 0 && z != rowCol.y && rows[(int)rowCol.x][z].given != 1) {
			// Cell has number
			//[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)(int)(rowCol.x * 9 + rowCol.y) withObject:(id)rows[(int)rowCol.y][z].entered];
			[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)(int)(rowCol.x * 9 + rowCol.y) withObject:(id)rows[(int)rowCol.x][z].entered];
		} else if (rows[(int)rowCol.x][z].given == 1) {
			[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)(int)(rowCol.x * 9 + rowCol.y) withObject:(id)(int)rows[(int)rowCol.x][z].correct];
		}
	}
}

%new
- (void)reduceAll {
	// DO STUFF
}

%new
- (void)checkCell {
	// DO STUFF
}

%new
- (void)checkAll {
	// DO STUFF
}

%new
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