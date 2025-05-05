class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string token : tokens) {
            if (token != "+" &&  token != "*" && token != "/" && token != "-" ) {
                st.push(stoi(token));
            } else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res;
                if (token == "+") res = a + b;
                else if (token == "-") res = a - b;
                else if (token == "*") res = a * b;
                else if (token == "/") res = a / b;
                st.push(res);

            }
        }
        return st.top();
    }
};
/*
STACK VISUALIZATION FOR evalRPN

Example tokens: ["2", "1", "+", "3", "*"]

Steps:

1. Push '2':
|   2  |

2. Push '1':
|   1  |
|   2  |

3. Operator '+':
- Pop 1 → b = 1
- Pop 2 → a = 2
- Compute a + b = 3
- Push result 3:
|   3  |

4. Push '3':
|   3  |
|   3  |

5. Operator '*':
- Pop 3 → b = 3
- Pop 3 → a = 3
- Compute a * b = 9
- Push result 9:
|   9  |

FINAL RESULT: 9

-------------------------------------------
Popping always happens **top-down**:
st.top() → pop() → use → next pop()

Operators always combine top two numbers:
let a = st.top(); st.pop();
let b = st.top(); st.pop();

Push result back onto stack for next use.
At the end, the single remaining value is the answer.
*/
