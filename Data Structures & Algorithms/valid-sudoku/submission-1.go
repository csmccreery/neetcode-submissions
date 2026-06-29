func isValidSudoku(board [][]byte) bool {
	rowMap := make([]map[byte]bool, 9)
	colMap := make([]map[byte]bool, 9)
	boxMap := make([]map[byte]bool, 9)


	for i := 0; i < 9; i++ {
		rowMap[i] = make(map[byte]bool)
		colMap[i] = make(map[byte]bool)
		boxMap[i] = make(map[byte]bool)
	}


	for r := 0; r < 9; r++ {
		for c := 0; c < 9; c++ {
			if board[r][c] == '.' {
				continue
			}

			val := board[r][c]
			sqidx := (r/3)*3 + c/3


			if rowMap[r][val] || colMap[c][val] || boxMap[sqidx][val] {
				return false
			}

			rowMap[r][val] = true
			colMap[c][val] = true
			boxMap[sqidx][val] = true
		}
	}

	return true
}