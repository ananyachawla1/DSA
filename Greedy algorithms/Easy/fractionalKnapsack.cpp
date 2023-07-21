#include <bits/stdc++.h> 

struct Item {
   int value;
   int weight;
};
 bool static comp(Item a, Item b) {
         double r1 = (double) a.value / (double) a.weight;
         double r2 = (double) b.value / (double) b.weight;
         return r1 > r2;
      }
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items, items + n, comp);

      int curWeight = 0;
      double finalvalue = 0.0;

      for (int i = 0; i < n; i++) {

         if (curWeight + items[i].weight <= w) {
            curWeight += items[i].weight;
            finalvalue += items[i].value;
         } else {
            int remain = w - curWeight;
            finalvalue += (items[i].value / (double) items[i].weight) * (double) remain;
            break;
         }
      }

      return finalvalue;
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
}