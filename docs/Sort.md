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