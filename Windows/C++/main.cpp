#include <list>
#include <string>

#define ips_max 2^32

#include "blockchain/blockchain.cpp"
#include "config/config.cpp"
#include "instructions/instructions.cpp"
#include "internet/internet.cpp"
#include "nodefs/nodefs.cpp"
#include "ui/ui.cpp"
#include "wallet/wallet.cpp"

unsigned long int possible_ipv4_addresses = (255*255*255*255 - ((255 * 255 * 255 * 2) + (16 * 255 * 255) + (255 * 255)));

namespace MAIN {
    
    unsigned int find_available_peers(int peers_list) {
        
        unsigned short int reps = 0;
        string available_peers = [];
        
        if (peers_list >= 32) {
            
            for (reps < peers_list.size()) {
                
                _INTERNET_.btclient.connect();
                _INTERNET_.btclient.send();
                if (_INTERNET_.btclient.recv() == "{'datas': 'im available'}") {
                    
                    available_peers.append(peers_list[(reps)]);
                    
                };
                
            };
            return ()
            
        } else {
            
            
            
        };
        
    }
    unsigned int find_peers(unsigned short int port) {
        
        for (ips_tested < ips_possible) {
            
            _INTERNET_.btclient.connect();
            _INTERNET_.btclient.send();
            
         };
        
    };
    
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
