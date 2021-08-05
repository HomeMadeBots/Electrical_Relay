#include "Relay_Actuator.h"


/*============================================================================*/
/* Realized interfaces */
/*============================================================================*/
void Relay_Actuator__Relay_Actuation__Close_Circuit( const Relay_Actuator* Me )
{
    if( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_CLOSED )
    {
        Me->Discrete_Pin->Set_Level(IO_LEVEL_LOW);
    }
    else if ( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_OPEN )
    {
        Me->Discrete_Pin->Set_Level(IO_LEVEL_HIGH);
    }
}
/*----------------------------------------------------------------------------*/
void Relay_Actuator__Relay_Actuation__Open_Circuit( const Relay_Actuator* Me )
{
    if( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_CLOSED )
    {
        Me->Discrete_Pin->Set_Level(IO_LEVEL_HIGH);
    }
    else if ( Me->Relay_Configuration == MONOSTABLE_RELAY_NORMALLY_OPEN )
    {
        Me->Discrete_Pin->Set_Level(IO_LEVEL_LOW);
    }
}