void f1(int a, int b) {
    if(a >= b) {
        cout << a << "\n";
        return;
    }
    f1(a+1, b-1);
}

// answer
// f1 (10, 16)
//  f1  (11, 15)
//   f1   (12, 14)
//    f1    (13, 13)    bc, print 13, return
//   f1   (12, 14)   return
//  f1  (11, 15)  return
// f1 (10, 16)
 
int f2(int n) {
    if(n == 1) { return 1; }
    return f2(n-1) + n;
}

// answer
// f2 (3)
//  f2  (2)
//   f2   (1)   bc, return 1
//  f2  (2)  1 + 2
// f2 (3) 3 + 3
// return 6

void f3(string s, int len) { 
    if(len == 0) { return; } 
    cout << s[len-1]; 
    return f3(s, len-1); 
}

// answer
// f3 ("Bye",3) print s[2] --> 'e'
//  f3("Bye",2) print s[1] --> 'y'
//   f3("Bye",1) print s[0] --> 'B'
//    f3("Bye",0) return