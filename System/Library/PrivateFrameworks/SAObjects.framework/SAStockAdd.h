/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSString, NSArray;

@interface SAStockAdd : SABaseClientBoundCommand {

	NSURL* _targetAppId;
	NSString* _companyName;
	NSArray* _stockReferences;
	NSString* _tickerSymbol;

}

@property (nonatomic,copy) NSURL * targetAppId;                    //@synthesize targetAppId=_targetAppId - In the implementation block
@property (nonatomic,copy) NSString * companyName;                 //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,copy) NSArray * stockReferences;              //@synthesize stockReferences=_stockReferences - In the implementation block
@property (nonatomic,copy) NSArray * stocks; 
@property (nonatomic,copy) NSString * tickerSymbol;                //@synthesize tickerSymbol=_tickerSymbol - In the implementation block
+(id)addWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)add;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSArray *)stocks;
-(void)setStocks:(NSArray *)arg1 ;
-(NSString *)companyName;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSArray *)stockReferences;
-(void)setStockReferences:(NSArray *)arg1 ;
-(NSString *)tickerSymbol;
-(void)setTickerSymbol:(NSString *)arg1 ;
-(id)encodedClassName;
@end

