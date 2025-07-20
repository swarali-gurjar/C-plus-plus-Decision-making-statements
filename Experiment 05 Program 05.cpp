//Travel choice decider with information on various places.
#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"1. Kashmir"<<endl<<"2. Delhi"<<endl<<"3.Bombay"<<endl<<"4.Jaipur"<<endl<<"5.Ahemdabad"<<endl<<"6.Uttarakhand"<<endl<<"7.Goa"<<endl;
    cout<<"Enter your choice of visit please.: ";
    cin>>choice;
    switch (choice)
    {
        case 1:
        cout<<"Kashmir - Kashmir is often called 'The Paradise on Earth'. It features stunning landscapes, including lush green valleys, snow capped mountains, pristine lakes, and picturesque gardens. So, do visit kashmir to experience the warm hospitality that will steal your heart forever.";
        break;
        case 2:
        cout<<"Delhi - Delhi is a city of captivating contrasts, where ancient history and modern life interwine. It's beauty lies in it's rich cultural heritage, reflected in stunning monuments like Qutub Minar and Humayun's Tomb. So, discover the heart of India in Delhi where history, culture,foor and modern life come alive in every corner!";
        break;
        case 3:
        cout<<"Bombay - Bombay is a vibrant city of dreams, where the arabian sea kisses historic shores, and the skyline pulses with ambition and charm. From Bollywood glamour to street food magic and soul stirring sunsets at Marine Drive, Bombay is a city that never sleeps and never stops inspiring. Come feels it's heartbeat.";
        break;
        case 4:
        cout<<"Jaipur - Jaipur, the Pink City, is a majestic blend of royal heritage, vibrant bazaars and stunning architecture painted in hues of history. From the grandeur of Amer Fort to the charm of Hawa Mahal and the colors of local culture, Jaipur offers a regal experience that will leave you enchanted — a must-visit for every traveler seeking beauty, culture, and timeless stories. ";
        break;
        case 5:
        cout<<"Ahemdabad - Ahmedabad is where tradition meets modernity — a city of majestic stepwells, intricate Jain temples, and the soulful Sabarmati River flowing beside vibrant street life.With its UNESCO World Heritage status, lip-smacking Gujarati cuisine, and a heart that beats with culture and creativity, Ahmedabad promises an experience that's both timeless and unforgettable. Come explore its warmth and wonder!";
        break;
        case 6:
        cout<<"Uttarakhand - Uttarakhand, the Devbhumi (Land of the Gods), is a serene paradise of snow-capped peaks, sacred rivers, and lush green valleys that soothe the soul. Whether you seek spiritual peace in Rishikesh and Kedarnath, adventure in Auli and Nainital, or pure mountain air in hidden villages — Uttarakhand welcomes you with divine beauty and unmatched tranquility. Come, let nature and divinity embrace you.";
        break;
        case 7:
        cout<<"Goa - Goa is a tropical escape where golden beaches meet swaying palms, and every sunset feels like a celebration of life. Whether you're chasing waves, exploring Portuguese charm, dancing under starlit skies, or simply soaking in serenity — Goa offers the perfect blend of thrill and chill. Come feel the vibe!";
        break;
        default:
        cout<<"Error.";
    }
}
