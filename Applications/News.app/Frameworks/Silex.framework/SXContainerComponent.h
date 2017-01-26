/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSArray, SXJSONArray;

@interface SXContainerComponent : SXComponent {

	NSArray* _components;

}

@property (nonatomic,readonly) NSArray * components;                     //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) SXJSONArray * allComponents; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(id)typeString;
-(SXJSONArray *)allComponents;
-(Class)componentViewClass;
-(NSArray *)components;
@end
