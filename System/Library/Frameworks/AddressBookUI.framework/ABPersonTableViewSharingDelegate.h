/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABActionSheetDelegate, ABStyleProvider, ABPersonViewControllerHelper, NSString, UIImage;

@interface ABPersonTableViewSharingDelegate : NSObject {

	ABActionSheetDelegate* _actionSheetDelegate;
	BOOL _shareMessageBodyIsHTML;
	ABStyleProvider* _styleProvider;
	ABPersonViewControllerHelper* _helper;
	NSString* _shareMessageBody;
	NSString* _shareMessageSubject;
	NSString* _shareLocationURL;
	UIImage* _shareLocationSnapshotImage;
	/*^block*/id _willTweetLocationCallback;
	/*^block*/id _willWeiboLocationCallback;

}

@property (nonatomic,retain) ABStyleProvider * styleProvider;                    //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) ABPersonViewControllerHelper * helper;              //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) BOOL canShareContact; 
@property (nonatomic,readonly) BOOL canSendMMS; 
@property (nonatomic,readonly) BOOL canSendMail; 
@property (nonatomic,readonly) BOOL canTweet; 
@property (nonatomic,readonly) BOOL canWeibo; 
@property (assign,nonatomic) BOOL shareMessageBodyIsHTML;                        //@synthesize shareMessageBodyIsHTML=_shareMessageBodyIsHTML - In the implementation block
@property (nonatomic,copy) NSString * shareMessageBody;                          //@synthesize shareMessageBody=_shareMessageBody - In the implementation block
@property (nonatomic,copy) NSString * shareMessageSubject;                       //@synthesize shareMessageSubject=_shareMessageSubject - In the implementation block
@property (nonatomic,copy) NSString * shareLocationURL;                          //@synthesize shareLocationURL=_shareLocationURL - In the implementation block
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage;               //@synthesize shareLocationSnapshotImage=_shareLocationSnapshotImage - In the implementation block
@property (nonatomic,copy) id willTweetLocationCallback;                         //@synthesize willTweetLocationCallback=_willTweetLocationCallback - In the implementation block
@property (nonatomic,copy) id willWeiboLocationCallback;                         //@synthesize willWeiboLocationCallback=_willWeiboLocationCallback - In the implementation block
+(id)_fakePersonForMergedPeople:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)canSendMail;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(ABPersonViewControllerHelper *)helper;
-(void)setHelper:(ABPersonViewControllerHelper *)arg1 ;
-(void)setWillTweetLocationCallback:(id)arg1 ;
-(BOOL)loadMessageUIAndReturnBundle:(id*)arg1 ;
-(void)getVCardData:(id*)arg1 exportMode:(int)arg2 fileName:(id*)arg3 ;
-(NSString *)shareMessageSubject;
-(NSString *)shareLocationURL;
-(id)willTweetLocationCallback;
-(id)willWeiboLocationCallback;
-(void)shareContactByEmail:(id)arg1 ;
-(void)shareContactByTextMessage:(id)arg1 ;
-(void)shareLocationOnTwitter:(id)arg1 ;
-(void)shareLocationOnWeibo:(id)arg1 ;
-(void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2 ;
-(BOOL)loadChatKitAndReturnBundle:(id*)arg1 ;
-(id)vCardFileName;
-(BOOL)canSendMMS;
-(BOOL)canTweet;
-(BOOL)canWeibo;
-(void)shareContactFromButtonItem:(id)arg1 ;
-(void)shareContact:(id)arg1 ;
-(BOOL)canShareContact;
-(BOOL)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(BOOL)arg1 ;
-(NSString *)shareMessageBody;
-(void)setShareMessageBody:(NSString *)arg1 ;
-(void)setShareMessageSubject:(NSString *)arg1 ;
-(void)setShareLocationURL:(NSString *)arg1 ;
-(UIImage *)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(UIImage *)arg1 ;
-(void)setWillWeiboLocationCallback:(id)arg1 ;
-(ABStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABStyleProvider *)arg1 ;
@end

