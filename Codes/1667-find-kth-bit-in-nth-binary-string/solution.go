func findKthBit(n int, k int) byte {
    if n == 1 {
        return '0'
    }
    length := (1 << n) - 1
    mid := length / 2 + 1
    
    if k == mid {
        return '1'
    }
    if k < mid {
        return findKthBit(n - 1, k)
    }
    if findKthBit(n - 1, length - k + 1) == '0' {
        return '1'
    }
    return '0'
}
