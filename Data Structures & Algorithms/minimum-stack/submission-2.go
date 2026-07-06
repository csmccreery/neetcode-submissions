type MinStack struct {
    Stack []int
    Lowest float64
}

func Constructor() MinStack {
    return MinStack{
        Stack: []int{},
        Lowest: math.Inf(1),
    }
}

func (this *MinStack) Push(val int) {
    this.Stack = append(this.Stack, val)
    if float64(val) < this.Lowest {
        this.Lowest = float64(val)
    }
}

func (this *MinStack) Pop() {
    val := 0
    val, this.Stack = this.Stack[len(this.Stack) - 1], this.Stack[:len(this.Stack) - 1]
    if this.Lowest == float64(val) {
        new_lowest := math.Inf(1)
        for _, num := range this.Stack {
            if float64(num) < new_lowest {
                new_lowest = float64(num)
            }
        }
        this.Lowest = new_lowest
    }
}

func (this *MinStack) Top() int {
    return this.Stack[len(this.Stack) - 1]
}

func (this *MinStack) GetMin() int {
    return int(this.Lowest)
}
