/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPProxyObject.h>
#import <libobjc.A.dylib/PRSActionButton.h>

@class NSString, NSArray;

@interface SPActionButton : SPProxyObject <PRSActionButton> {

	NSString* _contactIdentifier;

}

@property (retain) NSString * contactIdentifier;                    //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * provider; 
@property (assign,nonatomic) BOOL is_overlay; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSString * label_itunes; 
@property (nonatomic,retain) NSArray * adam_ids; 
@property (assign,nonatomic) BOOL streaming; 
@property (nonatomic,retain) id<PRSApp> punchout; 
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
@end

