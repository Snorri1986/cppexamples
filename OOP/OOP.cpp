#include <iostream>
#include <list>

class YoutubeChannel {
private:
    std::string Name;
    //std::string OwnerName;
    int SubscribersCount;
    std::list<std::string> PublishedVideoTitles;
protected:
    std::string OwnerName;
    int ContentQuality;
public:
    YoutubeChannel(std::string name,std::string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    }

    void GetInfo() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "OwnerName: " << OwnerName << std::endl;
        std::cout << "Subscriptions: " << SubscribersCount << std::endl;
        for (std::string video : PublishedVideoTitles) {
            std::cout << "Published Video Titles: " << video << std::endl;
        }
    }
    void Subscribe() {
        SubscribersCount++;
    }
    void Unsubscribe() {
        if(SubscribersCount > 0)
        SubscribersCount--;
    }
    void PublishVideo(std::string title) {
        PublishedVideoTitles.push_back(title);
    }
    void CheckAnalytics() {
        if (ContentQuality < 5) {
            std::cout << Name << " has bad quality content." << std::endl;
        }
        else {
            std::cout << Name << " This channel has a good content" << std::endl;
        }
    }
};

class CookingYouTubeChannel : public YoutubeChannel {
public:
    CookingYouTubeChannel(std::string name,std::string ownerName) :YoutubeChannel(name, ownerName){

    }

    void Practice() {
        std::cout << OwnerName << " is cooking meals and practise with spiecies..." << std::endl;
        ContentQuality++;
    }

};

class SingersYoutubeChannel : public YoutubeChannel {
public:
    SingersYoutubeChannel(std::string name, std::string ownerName) : YoutubeChannel(name, ownerName) {

    }
    void Practice() {
        std::cout << OwnerName << " is taking singing classes,learning new songs,learning how to dance..." << std::endl;
        ContentQuality++;
    }
};

int main()
{
    /*YoutubeChannel ytChannel("Pupkin", "Petro");
    ytChannel.GetInfo();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.PublishVideo("About dogs");
    ytChannel.GetInfo();*/

    CookingYouTubeChannel cookingYtChannel("Amy's kitchen","Amy");
    SingersYoutubeChannel singersYtChannel("JohnSings", "John");
    //ytChannelCook.GetInfo();

    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();

    YoutubeChannel* yt1 = &cookingYtChannel;
    YoutubeChannel* yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    system("pause>0");
}


