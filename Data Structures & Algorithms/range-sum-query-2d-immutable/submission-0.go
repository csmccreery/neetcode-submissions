type NumMatrix struct {
	prefixSum [][]int
}

func Constructor(matrix [][]int) NumMatrix {
	rows, cols := len(matrix), len(matrix[0])
	prefixSum := make([][]int, rows+1)
	for i := range prefixSum {
		prefixSum[i] = make([]int, cols+1)
	}

	for r := 0; r < rows; r++ {
		prefix := 0
		for c := 0; c < cols; c++ {
			prefix += matrix[r][c]
			prefixSum[r+1][c+1] = prefix + prefixSum[r][c+1]
		}
	}

	return NumMatrix{prefixSum: prefixSum}
}

func (this *NumMatrix) SumRegion(row1, col1, row2, col2 int) int {
	row1++; row2++; col1++; col2++
	bottomRight := this.prefixSum[row2][col2]
	above := this.prefixSum[row1-1][col2]
	below := this.prefixSum[row2][col1-1]
	topLeft := this.prefixSum[row1-1][col1-1]
	
	return bottomRight - above - below + topLeft
}
