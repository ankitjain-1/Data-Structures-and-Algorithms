# Greedy Algorithm - 
###### [Link for video lecture for this theory with examples](https://www.youtube.com/watch?v=ARvQcqJ_-NY&list=PLfFeAJ-vQopt_S5XlayyvDFL_mi2pGJE3&index=1)
##### In problems in which we need optimization (either maximum of minimum of something) we can use Greedy methods for that.
### Methods to solve Optimization Problems - 
*  Greedy Methods
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
* ##### If a problem requires either minimum or maximum result that problem is called Optimization Problem.
* ##### Greedy methods are used to solve optimisation problems.
---
### Approach of Greedy Methods - 
> A problem should be solved in stages, in each stage we will consider an input and if that input is feasible that we will include it to our solution, so by including all the feasible inputs we will get a optimal solution.

Code Example - 
``` 
for i = 1 to n {
    x = select(a);    // a = {a1, a2, a3, a4, a5, ...n items}
    if Feasible(x) {
        solution += x;
    }
}
```