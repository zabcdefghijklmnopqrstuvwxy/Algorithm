# 算法思想
## 枚举算法思想
枚举算法思想的最大特点是，在面对任何问题时它会去尝试每一种解决方法。在进行归纳推理时，如果逐个考察了某类事件的所有可能情况，因而得出一般结论，那么这个结论是可靠的，这种归纳方法叫作枚举法。

## 递推算法思想
与枚举算法思想相比，递推算法能够通过已知的某个条件，利用特定的关系得出中间推论，然后逐步递推，直到得到结果为止。由此可见，递推算法要比枚举算法聪明，它不会尝试每种可能的方案。

## 递归算法思想
因为递归算法思想往往用函数的形式来体现，所以递归算法需要预先编写功能函数。这些函数是独立的功能，能够实现解决某个问题的具体功能，当需要时直接调用这个函数即可。

## 分治算法思想
分治算法也采取了各个击破的方法，将一个规模为N的问题分解为K个规模较小的子问题，这些子问题相互独立且与原问题性质相同。只要求出子问题的解，就可得到原问题的解。

## 贪心算法思想
贪心算法也被称为贪婪算法，它在求解问题时总想用在当前看来是最好方法来实现。这种算法思想不从整体最优上考虑问题，仅仅是在某种意义上的局部最优求解。

## 回溯算法思想
回溯算法的处事方式比较委婉，它先暂时放弃关于问题规模大小的限制，并将问题的候选解按某种顺序逐一进行枚举和检验。当发现当前候选解不可能是正确的解时，就选择下一个候选解。

## 迭代算法思想
迭代法也称辗转法，是一种不断用变量的旧值递推新值的过程，在解决问题时总是重复利用一种方法。与迭代法相对应的是直接法（或者称为一次解法），即一次性解决问题。迭代法又分为精确迭代和近似迭代。“二分法”和“牛顿迭代法”属于近似迭代法，功能都比较类似。

## 模拟算法思想
模拟是对真实事物或者过程的虚拟。在编程时为了实现某个功能，可以用语言来模拟那个功能，模拟成功也就相应地表示编程成功。

