#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
struct TuVung
{
    string tu_tieng_anh;
    string tu_tieng_viet;
};

void Translate(TuVung a[], int so_tu){
    for (int i = 0; i < so_tu; i++)
    {
        cout << a[i].tu_tieng_anh;
        getchar();
        cout << a[i].tu_tieng_viet << endl;
        getchar();
    }
    
}
int main (){
    int A = 123;
    int so_tu = A - 25 + 1;
    TuVung toeic[so_tu] = {
        {"Railing", "lan can"},
        {"Put on", "dang deo"},
        {"wear", "da deo san tren nguoi"},
        {"lean over", "tua vao"},
        {"hold", "cam"},
        {"cabinet", "tu dung do"},
        {"passengers", "hanh khach"},
        {"line up", "xep hang"},
        {"gather", "tu tap"},
        {"reaching", "voi toi"},
        {"carry", "mang vac"},
        {"spectators", "nguoi xem o ngoai troi"},
        {"cash", "tien mat"},
        {"cash register", "may tinh tien"},
        {"fill", "lap day *am ngan"},
        {"feel", "cam nhan *am dai"},
        {"arrange", "sap xep"},
        {"jewelry", "trang suc"},
        {"display rack", "gia trung bay"},
        {"try on", "thu"},
        {"bracelets", "vong tay"},
        {"hanger", "moc quan ao"},
        {"merchandise", "hang hoa"},
        {"grocery", "hang hoa"},
        {"fence", "hang rao"},
        {"sweep", "quet"},
        {"stair", "cau thang"},
        {"leave", "roi di hoac bo lai *am dai"},
        {"live", "song *am ngan"},
        {"point at", "chi vao"},
        {"badge", "the ghi chuc danh"},
        {"counter", "quay tinh tien"},
        {"fold", "gap"},
        {"handbag", "tui deo tay"},
        {"take off", "coi >< put on"},
        {"brochure", "to quang cao xin"},
        {"leaflets", "to roi"},
        {"assemble", "lap rap"},
        {"construction", "xay dung"},
        {"climb", "leo treo *b cam"},
        {"alongside", "doc theo"},
        {"hang", "treo"},
        {"comlb", "chai (dau)"},
        {"distribute", "phan phat"},
        {"handouts", "tai lieu truyen tay"},
        {"greeting", "loi chao"},
        {"pull", "keo"},
        {"push", "day"},
        {"suitcase", "hanh ly"},
        {"luggage", "hanh ly"},
        {"stand in line", "xep hang"},
        {"loading into", "tai vao"},
        {"memos", "thong bao(ban ghi nho)"},
        {"attach", "dinh (gan)"},
        {"bullet in board", "bang thong bao"},
        {"monitor", "man hinh may tinh"},
        {"corner", "goc"},
        {"grassy", "nhieu co"},
        {"path", "duong nho"},
        {"fountain", "dai phun nuoc"},
        {"bench", "ghe dai"},
        {"rake", "cai cao"},
        {"leaf", "la"},
        {"leaves", "la so nhieu"},
        {"pave", "lat duong be tong"},
        {"pavement", "via he"},
        {"hand rail", "lan can co tay vin"},
        {"shade", "bong (do bong)"},
        {"branch", "canh cay (chi nhanh)"},
        {"fixture", "co dinh"},
        {"perdestrians", "nguoi di bo"},
        {"intersection", "nga tu"},
        {"scaffold", "gian giao"},
        {"erect", "dung len"},
        {"archway", "cong vom"},
        {"ceiling", "tran nha"},
        {"pots", "chau"},
        {"Organize", "sap xep"},/*tu so 78*/
        {"measure", "do dac"},
        {"exchange", "trao doi"},
        {"installation", "su sap dat"},
        {"dig", "dao"},
        {"spead out", "trai ra"},
        {"bulletin board", "bang tin"},
        {"refreshment", "do an nhe"},
        {"illuminate", "chieu sang"},
        {"bush", "bui cay"},
        {"board", "len tau xe"},
        {"brower", "ngam nghia"},
        {"unoccupied", "khong co nguoi"},
        {"carpeting ", "tam tham"},
        {"various ", "nhieu"},
        {"lifting ", "nang (ta)"},
        {"pack","dong goi"},
        {"presentation","bai thuyet trinh"},
        {"trim","tia (cay)"},
        {"lawn","bai co"},
        {"overlooking","nhin ra"},
        {"beneath","duoi"}
        // {"",""},
        // {"",""},
        // {"",""},
    };
    Translate(toeic, so_tu);
    return 0;

}