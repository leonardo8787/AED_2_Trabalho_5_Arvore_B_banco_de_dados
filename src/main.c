#include "menu.h"

int main(){
	Record r;
  	Pagina *btree = CreateBTree();
    menu(btree);
	return 0;
}