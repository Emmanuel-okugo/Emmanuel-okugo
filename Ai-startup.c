#include <stdio.h>
#include <string.h>

int main() {
    char user_input[100];

    printf("AI Chatbot: Hello! How can I assist you today?\n");

    while (1) {
        printf("User: ");
        fgets(user_input, sizeof(user_input), stdin);
        user_input[strcspn(user_input, "\n")] = '\0';

        if (strcmp(user_input, "hello") == 0) {
            printf("AI Chatbot: Hi there!\n");
        } else if (strcmp(user_input, "how are you?") == 0) {
            printf("AI Chatbot: I'm doing well, thank you!\n");
             } else if (strcmp(user_input, "ok") == 0) {
            printf("AI Chatbot:yeah\n");
            }else if(strcmp(user_input, "what are you?")==0){
            	printf("AI Chatbot: i am an artificial intelligence(A.I) created by a hreat tech guy called OKUGO CHIMDINDU EMMANUEL😎😎\n");  
            	}else if(strcmp(user_input, "thank you")==0){
            		printf("AI Chatbot:you are welcome\n feel free to ask me any question\n");
            		} else if (strcmp(user_input,"tell me a porn site you know") == 0) {
            printf("AI Chatbot:As an AI i cannot share implicit content and pleease flee from porn because it can destroy you\n ask me anyother question you have\n");
            			} else if (strcmp(user_input,"who is satan") == 0) {
            printf("AI Chatbot:please ask me another question, i can't answer this \n");
            				} else if (strcmp(user_input, "what is computer") == 0) {
            printf("AI Chatbot:computer is an electronic machine that accepts data,process it and give it out as a meaningful information \n");
            					} else if (strcmp(user_input,"write a post to encourage programmers not to be depressed") == 0) {
            printf("\nAI Chatbot:\tDepression, a word that carries immense weight and darkness. It's not uncommon to experience moments of frustration and despair when coding, especially during challenging times. But let me remind you, my fellow developers, that you are not alone. We've all been there, grappling with bugs, endless lines of code, and seemingly insurmountable obstacles.In the realm of programming, the struggle is real, but so is the reward. Behind every successful program lies countless hours of trial and error, perseverance, and a refusal to succumb to the clutches of self-doubt. Remember, coding is an art, and like any art form, it requires patience, dedication, and a genuine passion to create something extraordinary.\nEmbrace the difficulties, for they are the stepping stones to growth. Every error message is an opportunity to learn and refine your skills. Each roadblock you encounter is a chance to sharpen your problem-solving abilities. And with each line of code you write, you weave a part of your unique story in the vast tapestry of programming.\nIt's crucial to acknowledge that setbacks and frustrations are part of the journey. Don't let the weight of your challenges define your worth or overshadow your potential. Reach out to the vibrant coding community that surrounds you. Engage in forums, connect with fellow developers, and share your struggles. More often than not, you'll find a helping hand, a kindred spirit who has traversed similar paths and emerged stronger.\nTake breaks when needed. Clear your mind, go for a walk, or engage in activities that bring you joy. Remember, your mental well-being is as important as the code you write. Seek solace in the beauty of the process, relish the small victories, and celebrate your progress. Rome wasn't built in a day, and neither was a masterful codebase.\nAbove all, remind yourself that you are not defined by your coding challenges. Your worth as a person extends far beyond the realm of programming. Embrace your unique strengths, talents, and passions. Explore new domains, experiment with different technologies, and never stop learning.\nSo, my dear coder, if you find yourself battling with the shadows of depression during your coding journey, remember that it's a temporary state. Embrace the struggles, seek support, and keep pushing forward. With determination and resilience, you will overcome the hurdles, write elegant code, and create extraordinary things. Your journey as a programmer is a testament to your strength and capacity to conquer any challenge that comes your way. Keep coding, keep growing, and never lose sight of the incredible developer you are becoming.\n");
            						
            						
            						
            					
            				} else if (strcmp(user_input, "show me a picture") == 0) {
            printf("\nAI Chatbot:as an AI Chatbot i cannot show pictures but i can describe how a picture should be.\n\n..... OOPS i guess i have not been programmed to do so\n kindly ask me another question \n");
            					} else if (strcmp(user_input, "tell an affiliate marketer not to be depressed") == 0) {
            printf("\nAI Chatbot:Depression, a word that weighs heavy on the hearts of many struggling affiliate marketers. It's easy to feel discouraged and defeated when the sales aren't rolling in as expected. But let me remind you, my friend, that this journey is not defined by a single setback. It's a winding path, filled with ups and downs, and success often comes to those who persevere.\nAffiliate marketing is an art that requires time, effort, and constant learning. It's important to remember that setbacks and challenges are not indications of your worth or capabilities. Instead, they serve as stepping stones towards growth and eventual success. The most successful marketers have faced countless rejections and failures, but they refused to let those moments define them.\nTake a moment to reflect on your progress and the steps you've taken to build your affiliate marketing business. Celebrate the small victories along the way, for they are the building blocks of a successful future. Remember, every successful marketer started from scratch, just like you. They faced their own share of doubts and disappointments but stayed committed to their dreams.\nInstead of dwelling on the negative, shift your focus towards self-improvement and learning from your experiences. Reach out to fellow marketers, seek guidance from mentors, and expand your knowledge in the field. Embrace the mindset of a lifelong learner, and let each setback become an opportunity to refine your strategies and enhance your skills.\nAbove all, be patient and persistent. Rome wasn't built in a day, and neither is a thriving affiliate marketing business. Success may not come overnight, but with determination, perseverance, and a positive mindset, it will come.\nSo, my fellow affiliate marketer, when you find yourself feeling down, remember that this journey is about progress, growth, and resilience. Lift yourself up, brush off the setbacks, and keep moving forward. Your success story is still being written, and I have no doubt that it will be a remarkable one.\n");
            						} else if (strcmp(user_input, "which question are you programmed to answer") == 0) {
            printf("AI Chatbot:\ti am programmed to answer these questions\n1.what is a computer\n2.write a post to encourage programmers not to be depressed\n3.tell an affiliate marketer not to be depressed\n4.how are you?\n\n AS AN AI I CONSTANTLY UNDERGO UPDATE TO MAKE USER EXPERIENCE GREAT SO ANYTHING OTHER THAN THE ABOVE QUESTIONS I CANNOT ANSWER IT.\n");
        } else if (strcmp(user_input, "goodbye") == 0) {
            printf("AI Chatbot: Goodbye! Have a great day!\n");
           
            break;
        } else {
            printf("AI Chatbot: I'm sorry, I didn't understand that.\n");
            printf("write what i can understand for better experience\n");
        }
    }

    return 0;
}
