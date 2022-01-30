#include "/blockchain/blockchain.cpp"
#include "/configs/default.json"
#include "/instructions/instructions.cpp"
#include "/internet/internet.cpp"
#include "/nodefs/nodefs.cpp"
#include "/ui/ui.cpp"
#include "/wallet/wallet.cpp"


namespace _MAIN_ {
    
    int _INIT_() {
        
        _UI_.init();
        _NODEFileSystem_.init();
        _WALLET_.init(config["datas_path"["wallet_file"]]);
        _INTERNET_.init();
        _BLOCKCHAIN_.init();
        
    };
    
}
