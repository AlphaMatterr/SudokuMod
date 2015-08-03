	
	/* Reduce Options For Cols */
	NSMutableArray *Cnums = [NSMutableArray array];
	for (int z = 0; z < 9; z++) {
		if (cols[(int)rowCol.y][z].entered != 0 && cols[(int)rowCol.y][z].given != 1 && !conflicts[(int)(rowCol.y * 9 + z)] && ![Rnums containsObject:(id)(int)rows[(int)rowCol.x][z].correct]) {
			// Cell Is Number
			
			[Cnums addObject:(id)(int)cols[(int)rowCol.y][z].entered];
			
			[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)(int)(rowCol.x * 9 + rowCol.y) withObject:(id)(int)cols[(int)rowCol.y][z].entered];
		} else if (cols[(int)rowCol.y][z].given == 1 && !conflicts[(int)(rowCol.y * 9 + z)] && ![Rnums containsObject:(id)(int)cols[(int)rowCol.y][z].correct]) {
			
			[Cnums addObject:(id)(int)cols[(int)rowCol.y][z].correct];
			
			[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)(int)(rowCol.x * 9 + rowCol.y) withObject:(id)(int)cols[(int)rowCol.y][z].correct];
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
	
	NSMutableArray *Bnums = [NSMutableArray array];
	for (int z = 0; z < 9; z++) {
		if (boxs[box][z].entered != 0 && boxs[box][z].given != 1 && ![Rnums containsObject:(id)(int)boxs[box][z].entered]) {// && !conflicts[(int)(rowCol.y * 9 + z)]
			
			[Bnums addObject:(id)(int)boxs[box][z].entered];
			
			[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)(int)(rowCol.x * 9 + rowCol.y) withObject:(id)(int)boxs[box][z].entered];
		} else if (boxs[box][z].given == 1 && ![Rnums containsObject:(id)(int)boxs[box][z].correct]) { //&& !conflicts[(int)(rowCol.y * 9 + z)]
			
			[Bnums addObject:(id)(int)boxs[box][z].correct];
			
			[self performSelector:@selector(toggleNoteOnCell:forNumber:) withObject:(id)(int)(rowCol.x * 9 + rowCol.y) withObject:(id)(int)boxs[box][z].correct];
		}
	}	