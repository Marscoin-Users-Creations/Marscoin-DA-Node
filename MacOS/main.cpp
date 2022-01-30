#include "/blockchain/blockchain.cpp"
#include "/instructions/instructions.cpp"
#include "/internet/internet.cpp"
#include "/nodefs/nodefs.cpp"
#include "/ui/ui.cpp"
#include "/wallet/wallet.cpp"


namespace _MAIN_ {
    
    int _INIT_() {
        
        _UI_.init();
        _NODEFileSystem_.init();
        _WALLET_.init();
        _INTERNET_.init();
        _BLOCKCHAIN_.init();
        
    };
    
}
