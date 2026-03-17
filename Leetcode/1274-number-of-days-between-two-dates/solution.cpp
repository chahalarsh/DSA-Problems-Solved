class Solution {
public:

    bool isLeap(int y){
        return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
    }

    int fn(string date){
        int Cnt = 0;

        int Byear = 1971;
        int Bmonth = 1;
        int Bday = 1;

        int Uyear = stoi(date.substr(0, 4));
        int Umonth = stoi(date.substr(5, 2));
        int Uday = stoi(date.substr(8, 2));

        for(int i = Byear; i < Uyear; i++){
            if(isLeap(i)) Cnt += 366;
            else Cnt += 365;
        }

        for(int i = 1; i < Umonth; i++){
            if(i == 2){
                Cnt += isLeap(Uyear) ? 29 : 28;
            }else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                Cnt += 31;
            }else{
                Cnt += 30;
            }
        }

        Cnt += Uday - 1;

        return Cnt;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(fn(date1) - fn(date2));
    }
};
