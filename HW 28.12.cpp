#include <iostream>
using namespace std;

class Cat {
private:
    int age;
    double weight;
    double height;
    bool limbs;
    bool ears;
    bool inoculation;
    string name;
    string type;
    string eyes_color;
    bool angry = false;

public:



    void Play()
    {
        cout << "Play with me in a ball" << "\n";
    }
    void Eat()
    {
        cout << "Give me food" << "\n";
    }
    void Pee()
    {
        cout << "Khm...Khm..." << "\n";
    }
    void Stealing() {
        cout << "It's not me...";
    }
    void Bath() {
        cout << "I have a bad smell ((";
    }

    void SetAge(int age) {
        if (age < 0 || age > 14) {
            throw "ERROR!\n";
        }
        this->age = age;
    }
    int GetAge() const {
        return age;
    }

    void SetWeight(double weight) {
        if (weight < 0 || weight > 10) {
            throw "ERROR!\n";
        }
        this->weight = weight;
    }
    double GetWeight() const {
        return weight;
    }
    void SetHeight(double height) {
        if (height < 0 || height > 120) {
            throw "ERROR!\n";
        }
        this->height = height;
    }
    double GetHeight() const {
        return height;
    }

    void SetLimbs(bool limbs) {
        if (limbs == false) {
            throw "ERROR!\n";
        }
        this->limbs = limbs;
    }
    bool GetLimbs() const {
        return limbs;
    }

    void SetEars(bool ears) {
        if (ears == false) {
            cout << "it's soo sad((\n";
        }
        this->ears = ears;
    }
    bool GetEars() const {
        return ears;
    }

    void SetInoculation(bool inoculation) {
        if (inoculation == false) {
            cout << "You need to do inoculation for your cat!\n";
        }
        this->inoculation = inoculation;
    }
    bool GetInoculation() const {
        return inoculation;
    }

    void SetAngry(bool angry) {
        if (angry == false) {
            cout << "Your cat is angry!!\n";
        }
        this->angry = angry;
    }
    bool GetAngry() const {
        return angry;
    }
};

class God {
private:

    bool is_angry = true;
    long long age;
    double weight;
    double height;
    bool existence;
    bool material_body;
    string name;
    string plans;
    string what_religion;

public:

    void SetIsangr(bool is_angry) {
        this->is_angry = is_angry;
    }
    bool GetIsangr() const {
        return is_angry;
    }

    void Prayer()
    {
        cout << "I hear u" << "\n";
    }
    void Sins()
    {
        cout << "Let me know..." << "\n";
    }
    void Opinion()
    {
        cout << "Hmmm...i think..." << "\n";
    }
    void Punishment() {
        cout << "You are not a good person (";
    }
    void Forgiveness() {
        cout << "My child, i forgive u )))";
    }


    void SetIsangry(bool is_angry) {
        if (is_angry == true) {
            cout << "Emm... It's sooo bad\n";
        }
    }
    bool GetIsangry() const {
        return is_angry;
    }

    void PlayWith(Cat& some_cat) {
        if (GetIsangry() == true)
        {
            SetIsangry(false);
        }
        if (some_cat.GetAngry() == true)
        {
            some_cat.SetAngry(false);
        }
    }


    void SetAge(long long age) {
        if (age < 0) {
            throw "ERROR!\n";
        }
        this->age = age;
    }
    long long GetAge() const {
        return age;
    }
    void SetWeight(double weight) {
        if (weight < 0) {
            throw "ERROR!\n";
        }
        this->weight = weight;
    }
    double GetWeight() const {
        return weight;
    }

    void SetHeight(double height) {
        if (height < 0) {
            throw "ERROR!\n";
        }
        this->height = height;
    }
    double GetHeight() const {
        return height;
    }


    void SetExistence(bool existence) {
        if (existence == false) {
            cout << "God is real my son!!!\n";
        }
        this->existence = existence;
    }
    bool GetExistence() const {
        return existence;
    }


    void SetMaterialbody(bool material_body) {
        if (material_body == false) {
            cout << "It's ok!\n";
        }
        cout << "Emm... if you can see a God it's not normal";
        this->material_body = material_body;
    }
    bool GetMaterialbody() const {
        return material_body;
    }

};

class Book {
private:
    unsigned int read_pages;
    unsigned int year_of_issue;
    double weight;
    double height;
    bool age_limits;
    bool paperback;
    int page_count;
    string name;
    string janr;
    string description;
    bool open = false;
public:

    void SetOpen(bool open) {
        this->open = open;
    }
    bool GetOpen() const {
        return open;
    }
    void Be_called()
    {
        cout << "My name is..." << "\n";
    }
    void Inform()
    {
        cout << "I'm teaching about..." << "\n";
    }
    void Sized()
    {
        cout << "I'm not too fat" << "\n";
    }
    void Format() {
        cout << "I'm electronic";
    }
    void Illegal() {
        cout << "I'm keeping illegal information";
    }

    void ReadBook(God& some_god)
    {
        if (GetOpen() == false)
        {
            SetOpen(true);
        }
        read_pages += 3;
    }

    void SetReadpages(unsigned int read_pages) {
        if (read_pages > 100) {
            cout << "Not bad! continue!\n";
        }
        this->read_pages = read_pages;
    }
    int GetReadpages() const {
        return read_pages;
    }

    void SetYearofissue(unsigned int year_of_issue) {
        if (year_of_issue > 2000) {
            cout << "it's a modern book\n";
        }
        if (year_of_issue > 1900 || year_of_issue < 2000) {
            cout << "it's an old book from the 20th century\n";
        }
        cout << "It is soooo ol book!\n";
        this->year_of_issue = year_of_issue;
    }
    int GetYearofissue() const {
        return year_of_issue;
    }
    void SetWeight(double weight) {
        if (weight < 0) {
            throw "ERROR!\n";
        }
        this->weight = weight;
    }
    double GetWeight() const {
        return weight;
    }

    void SetHeight(double height) {
        if (height < 0) {
            throw "ERROR!\n";
        }
        this->height = height;
    }
    double GetHeight() const {
        return height;
    }

    void SetAgelimits(bool age_limits) {
        if (age_limits == true) {
            cout << "Close this book little baby!\n";
        }
        cout << "Good read! baby\n";
        this->age_limits = age_limits;
    }
    bool GetAgelimits() const {
        return age_limits;
    }
    void SetPaperback(bool paperback) {
        if (paperback == false) {
            cout << "It's cheep\n";
        }
        this->paperback = paperback;
    }
    bool GetPaperback() const {
        return paperback;
    }
    void SetPagecount(bool page_count) {
        if (page_count < 0) {
            throw "ERROR!!!";
        }
        this->page_count = page_count;
    }
    bool GetPagecount() const {
        return page_count;
    }


};





class Glasses {
private:

    unsigned short shelf_life;
    double weight;
    double height;
    bool for_minus;
    bool for_computer;
    bool panes;
    string brand;
    unsigned int seria;
    string form;
    bool sunny = false;
    bool is_ok = true;

public:

    void SetIsok(bool is_ok) {
        this->is_ok = is_ok;
    }
    bool GetIsok() const {
        return is_ok;
    }
    void SetSunny(bool sunny) {
        this->sunny = sunny;
    }
    bool GetSunny() const {
        return sunny;
    }

    void Application()
    {
        cout << "I will protect u : )" << "\n";
    }
    void Mminus()
    {
        cout << "I'm for -3" << "\n";
    }
    void Gender_use()
    {
        cout << "I'm better to use for women" << "\n";
    }
    void Benefit() {
        cout << "I'm improving your health.";
    }
    void Recipe() {
        cout << "I'm a prescription";
    }

    void CatPlay(Cat& some_cat) {
        if (some_cat.GetAngry() == true) {
            SetIsok(false);
        }
        if (some_cat.GetAngry() == false) {
            SetIsok(true);
        }
    }

    void SetWeight(double weight) {
        if (weight < 0 || weight > 1.0) {
            throw "ERROR!!";
        }
        this->weight = weight;
    }
    double GeWeight() const {
        return weight;
    }

    void SetHeight(double height) {
        if (height < 0 || height > 30) {
            throw "ERROR!!";
        }
        this->height = height;
    }
    double GetHeight() const {
        return height;
    }
    void SetForminus(bool for_minus) {
        if (for_minus == true) {
            cout << "It's glasses for you if you had a minus\n";
        }
        cout << "It's not for you if you had plus!\n";
        this->for_minus = for_minus;
    }
    bool GetForminus() const {
        return for_minus;
    }

    void SetForcomputer(bool for_computer) {
        if (for_computer == true) {
            cout << "It's for you if you have a computer\n";
        }
        cout << "If you dont have a computer you dont need this glasses\n";
        this->for_computer = for_computer;
    }
    bool GetForcomputer() const {
        return for_computer;
    }

    void SetPanes(bool panes) {
        if (panes == true) {
            cout << "Put the glass in, baby.!\n";
        }
        cout << "You have a good glasses\n";
        this->panes = panes;
    }
    bool GetPanes() const {
        return panes;
    }
    void SetSeria(unsigned int seria) {
        if (seria < 0) {
            throw "ERROR!";
        }
        this->seria = seria;
    }
    unsigned int GetSeria() const {
        return seria;
    }


};

class Vampire {
private:
    bool is_live = true;
    bool worn_glasses;
    unsigned int age;
    double weight;
    double height;
    bool abilities;
    bool fangs;
    bool transformation;
    string name;
    string nation;
    string name_power;
public:

    void SetLive(bool is_live) {
        this->is_live = is_live;
    }
    bool GetLive() const {
        return is_live;
    }

    void SetWorn(bool worn_glasses) {
        this->worn_glasses = worn_glasses;
    }
    bool GetWorn() const {
        return worn_glasses;
    }
    void Blood()
    {
        cout << "I want eat uuuuuuuuuuuu" << "\n";
    }
    void Feel()
    {
        cout << "Bella, i love you <3 " << "\n";
    }
    void Use_of_power()
    {
        cout << "I steal donuts because I'm invisible" << "\n";
    }
    void Bat() {
        cout << "No, i can't be a mouse with wingth";
    }
    void Vegetarian() {
        cout << "Aanumals are my friends";
    }

    void Sun(Glasses& sun_glasses) {
        if (sun_glasses.GetSunny() == true) {
            SetWorn(true);
        }
        if (sun_glasses.GetSunny() == true and GetWorn() == false) {
            SetWorn(false);
        }
    }

    void GoodGod(God& god) {
        if (god.GetIsangry() == false) {
            SetLive(true);
        }
        if (god.GetIsangry() == true) {
            SetLive(false);
        }
    }

    void SetAge(unsigned int age) {
        if (age < 0 || age > 1000000) {
            throw "ERROR!!";
        }
        this->age = age;
    }
    unsigned int GetAge() const {
        return age;
    }

    void SetWeight(double weight) {
        if (weight < 0 || weight > 273) {
            throw "ERROR!!";
        }
        this->weight = weight;
    }
    double GetWeight() const {
        return weight;
    }
    void SetHeight(double height) {
        if (height < 0 || height > 220) {
            throw "ERROR!!!\n";

        }
        this->height = height;
    }
    double GetHeight() const {
        return height;
    }

    void SetAbilities(bool abilities) {
        if (abilities == true) {
            cout << "A vampire must learn to use his abilities\n";
        }
        cout << "A vampire has no abilities\n";
        this->abilities = abilities;
    }
    bool GetAbilities() const {
        return abilities;
    }

    void SetFangs(bool fangs) {
        if (fangs == true) {
            cout << "This vampire probably likes blood\n";
        }
        cout << "This vampire doesn't feed on blood\n";
        this->fangs = fangs;
    }
    bool GetFangs() const {
        return fangs;
    }

};



int main()
{
    Glasses glasses;
    glasses.SetForcomputer(true);
    cout << glasses.GetForcomputer();
    glasses.SetForminus(true);
    cout << glasses.GetForminus();
    glasses.SetHeight(10);
    cout << glasses.GetHeight();
    glasses.SetPanes(false);
    cout << glasses.GetPanes();
    glasses.SetSeria(17732838);
    cout << glasses.GetSeria();
    glasses.SetWeight(0.2);
    cout << glasses.GeWeight();


    Vampire vampire;
    vampire.SetAbilities(true);
    cout << vampire.GetAbilities();
    vampire.SetAge(268);
    cout << vampire.GetAge();
    vampire.SetFangs(true);
    cout << vampire.GetFangs();
    vampire.SetHeight(185);
    cout << vampire.GetHeight();
    vampire.SetWeight(98);
    cout << vampire.GetWeight();


    Book book;
    book.SetAgelimits(true);
    cout << book.GetAgelimits();
    book.SetHeight(20);
    book.GetHeight();
    book.SetPagecount(65);
    cout << book.GetPagecount();
    book.SetPaperback(false);
    cout << book.GetPaperback();
    book.SetReadpages(120);
    cout << book.GetReadpages();
    book.SetWeight(3);
    cout << book.GetWeight();
    book.SetYearofissue(2006);
    cout << book.GetYearofissue();


    God god;

    god.SetAge(82736);
    cout << god.GetAge();
    god.SetExistence(false);
    cout << god.GetExistence();
    god.SetHeight(1000000);
    cout << god.GetHeight();
    god.SetIsangry(true);
    cout << god.GetIsangry();
    god.SetMaterialbody(true);
    cout << god.GetMaterialbody();
    god.SetWeight(4793480);
    cout << god.GetWeight();

    Cat cat;
    cat.SetAge(2);
    cout << cat.GetAge() << "\n";
    cat.SetAngry(true);
    cout << cat.GetAngry() << "\n";
    cat.SetEars(false);
    cout << cat.GetEars() << "\n";
    cat.SetHeight(98);
    cout << cat.GetHeight();
    cat.SetInoculation(false);
    cout << cat.GetInoculation();
    cat.SetLimbs(true);
    cout << cat.GetLimbs();
    cat.SetWeight(4);
    cout << cat.GetWeight();
    vampire.GoodGod(god);
    vampire.Sun(glasses);
    glasses.CatPlay(cat);
    book.ReadBook(god);
    god.PlayWith(cat);


}
