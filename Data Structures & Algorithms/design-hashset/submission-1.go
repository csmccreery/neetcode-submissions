type MyHashSet struct {
	Data []int
}

func Constructor() MyHashSet {
    return MyHashSet{Data: []int{}}
}

func (this *MyHashSet) Add(key int) {
	if !this.Contains(key) {
		this.Data = append(this.Data, key)
	}
}

func (this *MyHashSet) Remove(key int) {
	for idx := range this.Data {
		if this.Data[idx] == key {
			this.Data = append(this.Data[:idx], this.Data[idx+1:]...)
			return /* Need to return here or it will endlessly append */
		}
	}
}

func (this *MyHashSet) Contains(key int) bool {
	for _, item := range this.Data {
		if key == item {
			return true
		}
	}

	return false
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Add(key);
 * obj.Remove(key);
 * param_3 := obj.Contains(key);
 */
 