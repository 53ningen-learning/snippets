# ソート

## 挿入ソート

1. 1 つ目の要素を整列済みとマークする（整列済み配列長: 1）
1. 2 つ目の要素を整列済みの要素の末尾から比較し適切な位置に挿入する（整列済み配列長: 2）
1. N つ目の要素を整列済みの要素の末尾から比較し適切な位置に挿入する（整列済み配列長: N）

```
insertionSort(T[] ns):
// ns[0] は整列済みとマークするので ns[1] からソートを開始する
for i = 1; i < ns.length - 1; i++
  target = ns[i]
  j = i - 1
  while j >= 0 && ns[j] > target
    ns[j + 1] = ns[j]
    j--
  ns[j + 1] = target
```

## バブルソート

1. 末尾から隣接する要素同士の並び替えを先頭まで行い先頭に到達したら先頭を整列済みとマークする（整列済み配列長: 1）
2. これを繰り返して隣接する要素同士の並び替えが全く発生しなくなったタイミングが整列済みとなる

```
bubbleSort(T[] ns):
  sorted = false
  for i = 0; i < ns.length - 1; i++
    sorted = true
    for j = ns.length - 1; j > i; j--
      if (ns[j] < ns[i]) {
        swap(ns[i], ns[j])
        sorted = false
      }
```
