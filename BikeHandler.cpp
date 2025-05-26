#include "BikeHandler.h"

BikeHandler::BikeHandler(Database& database) : db(database) {}

int BikeHandler::registerBike(Member currentUserId, string Id, string ModelName) {

    if (currentUserId.x == ADMIN) {

        db.addBike(Id, ModelName);

       cout << "Bike registration feature not yet implemented.\n";
       cout << "Called by user ID: " << currentUserId.Id << endl;

       return 1; 
        
    } else {
        return -1;
    }
}

void BikeHandler::rentBike(Member currentUserId) {

    cout << "Bike rental feature not yet implemented.\n";
}

void BikeHandler::showRentalList(Member currentUserId) {
    cout << "Show rental list feature not yet implemented.\n";
} 