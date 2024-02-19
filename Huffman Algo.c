Algorithm Huffman(C)
    n = |C|
    Q = C
    for i <- 1 to n - 1 do
        temp = get_node()
        left[temp] = Get_min(Q)
        right[temp] = Get_min(Q)
        a = left[temp]
        b = right[temp]
        F[temp] = f[a] + f[b]
        insert(Q, temp)
    return Get_min(0)
