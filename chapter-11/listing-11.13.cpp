// Listing 11.13 - Demonstrates a version of class Fan aggrigating ElectricMotor;

class Fan 
{
    public: 
        Fan() {}
        ~Fan() {}

    void StartFan () 
    {
        m_ElectricFan.StartMotor();
    }

    void StopFan () 
    {
        m_ElectricMotor.StopMotor();
    }

    private: 
        ElectricMotor m_ElectricMotor;
}
