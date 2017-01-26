/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSDictionary, NSError;


@protocol ACMTicketVerificationResponse <NSObject>
@property (retain,readonly) NSNumber * personDSID; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@required
-(void)setRawResponseData:(id)arg1;
-(NSDictionary *)rawResponseData;
-(void)setUserInfo:(id)arg1;
-(id)userInfo;
-(void)setError:(id)arg1;
-(NSError *)error;
-(NSNumber *)personDSID;

@end
