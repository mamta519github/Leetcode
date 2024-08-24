// class Solution {
// public:
//     int romanToInt(string s) {
//      Map<character,Integer>map = new HashMap<>();
//       map.put('I', 1);
//        map.put('V', 5);
//         map.put('X', 10);
//         map.put('L', 50);
//         map.put('C', 100);
//          map.put('D', 500);
//         map.put('M', 1000);

//         int result = map.get(s.charAt(s.length()-1));
//         for(int i = s.length()-2; i >= 0; i--)
//         {
//         if(map.get(s.charAt(i)) < map.get(s.charAt(i+1)))
//         {
//             result-=map.get(s.charAt(i));
//         }
//          else {
//             result+=map.get(s.charAt(i));
//          }
//         }
//         return 0;
//     }
// };

#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        int result = map[s[s.length() - 1]];
        for (int i = s.length() - 2; i >= 0; i--) {
            if (map[s[i]] < map[s[i + 1]]) {
                result -= map[s[i]];
            } else {
                result += map[s[i]];
            }
        }
        return result;
    }
};
