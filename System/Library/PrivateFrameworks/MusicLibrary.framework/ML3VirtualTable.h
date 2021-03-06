/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/ML3DatabaseModuleContext.h>

@protocol ML3VirtualTableDelegate;
@class NSString, ML3DatabaseModule, ML3DatabaseTable, ML3DatabaseConnection;

@interface ML3VirtualTable : NSObject <ML3DatabaseModuleContext> {

	NSString* _virtualTableName;
	ML3DatabaseModule* _module;
	id<ML3VirtualTableDelegate> _delegate;
	ML3DatabaseTable* _databaseTable;
	ML3DatabaseConnection* _connection;
	shared_ptr<ML3VirtualTableDataSource>* _dataSource;

}

@property (assign,nonatomic) shared_ptr<ML3VirtualTableDataSource>* dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<ML3VirtualTableDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ML3DatabaseTable * databaseTable;                             //@synthesize databaseTable=_databaseTable - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(shared_ptr<ML3VirtualTableDataSource>*)arg1 ;
-(void)setDelegate:(id<ML3VirtualTableDelegate>)arg1 ;
-(void)dealloc;
-(shared_ptr<ML3VirtualTableDataSource>*)dataSource;
-(id<ML3VirtualTableDelegate>)delegate;
-(NSString *)name;
-(BOOL)unregister;
-(ML3DatabaseConnection *)connection;
-(BOOL)registerWithConnection:(id)arg1 ;
-(id)initWithDatabaseTable:(id)arg1 ;
-(ML3DatabaseTable *)databaseTable;
@end

