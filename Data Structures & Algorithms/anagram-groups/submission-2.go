func AnagramCount(s string) [26]int {
  	count := [26]int{}
  	for i := 0; i < len(s); i++ {
  		count[s[i] - 'a']++
  	}

  	return count
}

func groupAnagrams(strs []string) [][]string {
  	if len(strs) == 0 {
  		return [][]string{}
  	}
  	
  	countMap := map[[26]int][]string{}
  	for _, str := range strs {
  		count := AnagramCount(str)
  		if _, ok := countMap[count]; ok {
  			countMap[count] = append(countMap[count], str) 
  		} else {
  			newSlice := []string{str}
  			countMap[count] = newSlice
  		}
  	}

  	result := [][]string{}
  	for _, value := range countMap {
  		result = append(result, value)
  	}

  	return result
}
