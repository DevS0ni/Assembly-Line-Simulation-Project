// ***********************************************************
// File    LineManager.h
// Version 1.0
// Author  Dev Soni
// Description:
// CustomerOrder Module
// ***********************************************************

#ifndef SDDS_LINEMANAGER_H_
#define SDDS_LINEMANAGER_H_

#include <iostream>
#include <vector>
#include "Workstation.h"

namespace sdds {
    class LineManager {
        std::vector<Workstation*> m_activeLine{};
        size_t m_cntCustomerOrder{};
        Workstation* m_firstStation{};
    public:
        LineManager(const std::string& file, 
            std::vector<Workstation*>& stations);
        void reorderStations();
        bool run(std::ostream& os);
        void display(std::ostream& os) const;
    };
}

#endif // !SDDS_LINEMANAGER_H_