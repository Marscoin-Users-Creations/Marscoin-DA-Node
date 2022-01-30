#include <list>
#include <string>

#include "blockchain/blockchain.cpp"
#include "config/config.cpp"
#include "instructions/instructions.cpp"
#include "internet/internet.cpp"
#include "nodefs/nodefs.cpp"
#include "ui/ui.cpp"
#include "wallet/wallet.cpp"

namespace MAIN {
    
    function find_available_peers(int peers_list) {
        
        if (_INTERNET_.btclient.recv()["peers"] == 32) {
            
            
            
        };
        
    }
    
    int init() {
        
        _THREADING_.init();
        _UI_.init();
        _NODEFileSystem_.init();
        _WALLET_.init(config["datas_path"["wallet_file"]]);
        _INTERNET_.init();
        _BLOCKCHAIN_.init();
        _INSTRUCTIONS_.init();
        
        if (peers.size() >= 32) {
            
            find_available_peers(peers);
            
        } else {
            
            
            
        };
        
    };
    
}
