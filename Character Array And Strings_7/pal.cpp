// /*
// 	Time complexity: O((length(S))
// 	Space Complexity: O((length(S))
	
// 	Where S is the given string. 
// */

// void toLowerCase(string &s)
// {	
//     // Traverse through the string s
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
        
//         // Check if ch is a uppercase letter
//         if (ch <= 'Z' && ch >= 'A')
//         {
//             ch = ch - ('A' - 'a');
//             s[i] = ch;
//         }
//     }
// }

// // This function reverse the string s
// string reverseString(string s)
// {
//     for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
//     {
//         // Swap the ith and jth characters.
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//     }
    
//     return s;
// }

// bool checkPalindrome(string s)
// {	
//     // Convert uppercase letter into lowercase letter
//     toLowerCase(s);
    
//     // Find the reverse string of s
//     string reversedS = reverseString(s);

//     int n = s.length();
//     int i = 0;
//     int j = 0;

//     while (i < n && j < n)
//     {
//         if (isalnum(s[i]) == 0)
//         {
//             // ith pointer points to invalid character.
//             ++i;
//         }
//         else if (isalnum(reversedS[j]) == 0)
//         {
//             // jth pointer points to invalid character.
//             ++j;
//         }
//         else if (s[i] == reversedS[j])
//         {
//             ++i; 
//             ++j;
//         }
//         else
//         {
//             return false;
//         }
//     }
    
//     return true;
// }

