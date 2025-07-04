// api-header.mustache

// licenseInfo.mustache

/**
 * Libre Graph API
 * Libre Graph is a free API for cloud collaboration inspired by the MS Graph API.
 *
 * The version of the OpenAPI document: v1.0.8
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIGroupApi_H
#define OAI_OAIGroupApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICollection_of_users.h"
#include "OAIGroup.h"
#include "OAIMember_Reference.h"
#include "OAIOdata_error.h"
#include <QSet>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIGroupApi : public QObject {
    Q_OBJECT

public:
    OAIGroupApi(const int timeOut = 0);
    ~OAIGroupApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  group_id QString [required]
    * @param[in]  oai_member_reference OAIMember_Reference [required]
    */
    void addMember(const QString &group_id, const OAIMember_Reference &oai_member_reference);

    /**
    * @param[in]  group_id QString [required]
    * @param[in]  if_match QString [optional]
    */
    void deleteGroup(const QString &group_id, const ::OpenAPI::OptionalParam<QString> &if_match = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  group_id QString [required]
    * @param[in]  directory_object_id QString [required]
    * @param[in]  if_match QString [optional]
    */
    void deleteMember(const QString &group_id, const QString &directory_object_id, const ::OpenAPI::OptionalParam<QString> &if_match = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  group_id QString [required]
    * @param[in]  select QSet<QString> [optional]
    * @param[in]  expand QSet<QString> [optional]
    */
    void getGroup(const QString &group_id, const ::OpenAPI::OptionalParam<QSet<QString>> &select = ::OpenAPI::OptionalParam<QSet<QString>>(), const ::OpenAPI::OptionalParam<QSet<QString>> &expand = ::OpenAPI::OptionalParam<QSet<QString>>());

    /**
    * @param[in]  group_id QString [required]
    */
    void listMembers(const QString &group_id);

    /**
    * @param[in]  group_id QString [required]
    * @param[in]  oai_group OAIGroup [required]
    */
    void updateGroup(const QString &group_id, const OAIGroup &oai_group);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void addMemberCallback(OAIHttpRequestWorker *worker);
    void deleteGroupCallback(OAIHttpRequestWorker *worker);
    void deleteMemberCallback(OAIHttpRequestWorker *worker);
    void getGroupCallback(OAIHttpRequestWorker *worker);
    void listMembersCallback(OAIHttpRequestWorker *worker);
    void updateGroupCallback(OAIHttpRequestWorker *worker);

signals:

    void addMemberSignal();
    void deleteGroupSignal();
    void deleteMemberSignal();
    void getGroupSignal(OAIGroup summary);
    void listMembersSignal(OAICollection_of_users summary);
    void updateGroupSignal();

    void addMemberSignalFull(OAIHttpRequestWorker *worker);
    void deleteGroupSignalFull(OAIHttpRequestWorker *worker);
    void deleteMemberSignalFull(OAIHttpRequestWorker *worker);
    void getGroupSignalFull(OAIHttpRequestWorker *worker, OAIGroup summary);
    void listMembersSignalFull(OAIHttpRequestWorker *worker, OAICollection_of_users summary);
    void updateGroupSignalFull(OAIHttpRequestWorker *worker);

    void addMemberSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGroupSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMemberSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getGroupSignalE(OAIGroup summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listMembersSignalE(OAICollection_of_users summary, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGroupSignalE(QNetworkReply::NetworkError error_type, QString error_str);

    void addMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteGroupSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMemberSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGroupSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listMembersSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void updateGroupSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
