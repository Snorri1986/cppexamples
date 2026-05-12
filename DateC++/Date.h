#ifndef GITHUBREPO_DATE_H
#define GITHUBREPO_DATE_H

class Date
{
    public:

    Date()
    {
        setMonth(1);
        setDay(1);
        setYear(1970);
    };

    Date(const int m, const int d, const int y)
    {
        setMonth(m);
        setDay(d);
        setYear(y);
    }


            int getDay() const;
            int getMonth() const;
            int getYear() const;


            void setMonth(int month);
            void setDay(int day);
            void setYear(int year);

            // task related functions
            void init(int m, int d, int y);
            void init();
            void print();

    private:
            int month, day, year;
};

#endif //GITHUBREPO_DATE_H
