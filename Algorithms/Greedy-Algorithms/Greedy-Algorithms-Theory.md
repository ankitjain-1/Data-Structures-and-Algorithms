# Greedy Algorithm - 
**An algorithm paradigm that follows the problem solving approach of making the locally optimal choice at each stage with the hope of finding global optimum.**
###### Links for video lecture for this theory with examples - 
[link1](https://youtu.be/ARvQcqJ_-NY), [link2](https://youtu.be/HzeK7g8cD0Y)
##### In problems in which we need optimization (either maximum of minimum of something) we can use Greedy methods for that.
### Methods to solve Optimization Problems - 
* Greedy Methods
* Dynamic Programming
* Branch and Bound
---
### Terminology for Greedy Algorithms - 
* ##### Feasible Solution - 
    * Those soltuions which satisfies given conditions.
    * There can be more than one feasible solutions.
* ##### Optimal Soutions - 
    * The solution that gives best results, that causes minimum cost.
    * That can be one and only one optimal solution.
* ##### If a problem requires either minimum or maximum result that problem is called **Optimization Problem**.
* ##### Greedy methods are used to solve optimization problems.
---
### Approach of Greedy Methods - 
>
> A problem should be solved in stages, in each stage we will consider an input and if that input is feasible that we will include it to our solution, so by including all the feasible inputs we will get a global optimal solution.

Code Example - 
``` 
for i = 1 to n {
    x = select(a);    // a = {a1, a2, a3, a4, a5, ...n items}
    if Feasible(x) {
        solution += x;
    }
}
```

**Pros -**
Simple, Easy to implement, run fast.
**Cons -**
Very often we don't get global optimum solution.  

**In this Example we don't get global optimum by using greedy method -**     


![Example gif](https://d18l82el6cdm1i.cloudfront.net/uploads/xlck8z42EM-greedy-search-path-example.gif)

In these problems we can use greedy problem - 
* Activity Selection Problem
* Huffman Coding
* Job Squencing Problem
* Fractional Knapsack Problem
* Prism's Minimum Spanning Tree