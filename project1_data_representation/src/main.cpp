
#include <iostream>
#include <cassert>
#include <sstream>
#include <iomanip>
#include "alu.hpp"

static std::string to_hex(uint16_t x){ std::ostringstream os; os<<std::hex<<std::uppercase<<std::setw(4)<<std::setfill('0')<<x; return os.str(); }
static std::string to_bin(uint16_t x){ std::string s(16,'0'); for(int i=0;i<16;++i) if(x&(1<<(15-i))) s[i]='1'; return s; }

void tests(){
    auto [r1,f1]=ALU::add(0xFFFF,0x0001); assert(r1==0x0000 && f1.C && f1.Z);
    auto [r2,f2]=ALU::sub(0x0000,0x0001); assert(r2==0xFFFF && !f2.C && f2.N);
    std::cout<<"[P1] ALU smoke tests passed.\n";
}

int main(int argc,char** argv){
    if(argc>1 && std::string(argv[1])=="--test"){ tests(); return 0; }
    std::cout<<"Enter number (dec or 0x/0b): ";
    std::string s; if(!std::getline(std::cin,s)) return 0;
    uint16_t v=0;
    if(s.rfind("0x",0)==0||s.rfind("0X",0)==0) v=(uint16_t)std::stoul(s,nullptr,16);
    else if(s.rfind("0b",0)==0||s.rfind("0B",0)==0){ for(char c: s.substr(2)){ v=(v<<1)|(c=='1'); } }
    else v=(uint16_t)std::stoul(s,nullptr,10);
    std::cout<<"HEX="<<to_hex(v)<<" BIN="<<to_bin(v)<<" DEC="<<std::dec<<v<<"\n";
    return 0;
}
