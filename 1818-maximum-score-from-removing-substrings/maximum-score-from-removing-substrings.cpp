class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string ans = s;
        int res = 0;


        // if (y > x){
        //     while (1){
        //         int pos = ans.find("ba");
        //         if (pos != -1){
        //             ans.erase(pos,2);
        //             res += y;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     while (1){
        //         int pos = ans.find("ab");
        //         if (pos != -1){
        //             ans.erase(pos,2);
        //             res += x;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // else{
        //     while (1){
        //         int pos = ans.find("ab");
        //         if (pos != -1){
        //             ans.erase(pos,2);
        //             res += x;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     while (1){
        //         int pos = ans.find("ba");
        //         if (pos != -1){
        //             ans.erase(pos,2);
        //             res += y;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }

        // 
        
        if (x>y){
            while(1){
                int count = 0;
                for (int i = 1; i < s.length(); i++){
                    if (s[i] == 'b' & s[i-1] == 'a'){
                        res += x;
                        s.erase(i-1, 2);
                        i-=2;
                        if(i<=0) i=0;
                        count++;
                    }
                }
                if (count == 0){
                    break;
                }
            }
            while(1){
                int count = 0;
                for (int i = 1; i < s.length(); i++){
                    if (s[i] == 'a' & s[i-1] == 'b'){
                        res += y;
                        s.erase(i-1, 2);
                        count++;
                        i-=2;
                        if(i<=0) i=0;
                    }
                }
                if (count == 0){
                    break;
                }
            }
        }
        else{
            while(1){
                int count = 0;
                for (int i = 1; i < s.length(); i++){
                    if (s[i] == 'a' & s[i-1] == 'b'){
                        res += y;
                        s.erase(i-1, 2);
                        i-=2;
                        if(i<=0) i=0;
                        count++;
                    }
                }
                if (count == 0){
                    break;
                }
            }
            while(1){
                int count = 0;
                for (int i = 1; i < s.length(); i++){
                    if (s[i] == 'b' & s[i-1] == 'a'){
                        res += x;
                        s.erase(i-1, 2);
                        count++;
                        i-=2;
                        if(i<=0) i=0;
                    }
                }
                if (count == 0){
                    break;
                }
            }
        }

        return res;

    }
};