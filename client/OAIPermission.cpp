// model-body.mustache

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

#include "OAIPermission.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIPermissionPrivate {
    friend class OAIPermission;

     QString id;
     bool id_isSet;
     bool id_isValid;

     bool has_password;
     bool has_password_isSet;
     bool has_password_isValid;

     QDateTime expiration_date_time;
     bool expiration_date_time_isSet;
     bool expiration_date_time_isValid;

     QDateTime created_date_time;
     bool created_date_time_isSet;
     bool created_date_time_isValid;

     OAISharePointIdentitySet granted_to_v2;
     bool granted_to_v2_isSet;
     bool granted_to_v2_isValid;

     OAISharingLink link;
     bool link_isSet;
     bool link_isValid;

     QList<QString> roles;
     bool roles_isSet;
     bool roles_isValid;

     QList<OAIIdentitySet> granted_to_identities;
     bool granted_to_identities_isSet;
     bool granted_to_identities_isValid;

     QList<QString> libre_graph_permissions_actions;
     bool libre_graph_permissions_actions_isSet;
     bool libre_graph_permissions_actions_isValid;

     OAISharingInvitation invitation;
     bool invitation_isSet;
     bool invitation_isValid;
};

OAIPermission::OAIPermission()
    : d_ptr()
{
}

OAIPermission::OAIPermission(const OAIPermission& other)
    : d_ptr(other.d_ptr)
{
}

OAIPermission::OAIPermission(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIPermission::~OAIPermission() = default;

void OAIPermission::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIPermissionPrivate{});

        Q_D(OAIPermission);


        d->id_isSet = false;
        d->id_isValid = false;

        d->has_password_isSet = false;
        d->has_password_isValid = false;

        d->expiration_date_time_isSet = false;
        d->expiration_date_time_isValid = false;

        d->created_date_time_isSet = false;
        d->created_date_time_isValid = false;

        d->granted_to_v2_isSet = false;
        d->granted_to_v2_isValid = false;

        d->link_isSet = false;
        d->link_isValid = false;

        d->roles_isSet = false;
        d->roles_isValid = false;

        d->granted_to_identities_isSet = false;
        d->granted_to_identities_isValid = false;

        d->libre_graph_permissions_actions_isSet = false;
        d->libre_graph_permissions_actions_isValid = false;

        d->invitation_isSet = false;
        d->invitation_isValid = false;
    }
}

void OAIPermission::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPermission::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIPermission);

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->has_password_isValid = ::OpenAPI::fromJsonValue(d->has_password, json[QString("hasPassword")]);
    d->has_password_isSet = !json[QString("hasPassword")].isNull() && d->has_password_isValid;

    d->expiration_date_time_isValid = ::OpenAPI::fromJsonValue(d->expiration_date_time, json[QString("expirationDateTime")]);
    d->expiration_date_time_isSet = !json[QString("expirationDateTime")].isNull() && d->expiration_date_time_isValid;

    d->created_date_time_isValid = ::OpenAPI::fromJsonValue(d->created_date_time, json[QString("createdDateTime")]);
    d->created_date_time_isSet = !json[QString("createdDateTime")].isNull() && d->created_date_time_isValid;

    d->granted_to_v2_isValid = ::OpenAPI::fromJsonValue(d->granted_to_v2, json[QString("grantedToV2")]);
    d->granted_to_v2_isSet = !json[QString("grantedToV2")].isNull() && d->granted_to_v2_isValid;

    d->link_isValid = ::OpenAPI::fromJsonValue(d->link, json[QString("link")]);
    d->link_isSet = !json[QString("link")].isNull() && d->link_isValid;

    d->roles_isValid = ::OpenAPI::fromJsonValue(d->roles, json[QString("roles")]);
    d->roles_isSet = !json[QString("roles")].isNull() && d->roles_isValid;

    d->granted_to_identities_isValid = ::OpenAPI::fromJsonValue(d->granted_to_identities, json[QString("grantedToIdentities")]);
    d->granted_to_identities_isSet = !json[QString("grantedToIdentities")].isNull() && d->granted_to_identities_isValid;

    d->libre_graph_permissions_actions_isValid = ::OpenAPI::fromJsonValue(d->libre_graph_permissions_actions, json[QString("@libre.graph.permissions.actions")]);
    d->libre_graph_permissions_actions_isSet = !json[QString("@libre.graph.permissions.actions")].isNull() && d->libre_graph_permissions_actions_isValid;

    d->invitation_isValid = ::OpenAPI::fromJsonValue(d->invitation, json[QString("invitation")]);
    d->invitation_isSet = !json[QString("invitation")].isNull() && d->invitation_isValid;
}

QString OAIPermission::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPermission::asJsonObject() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->has_password_isSet) {
        obj.insert(QString("hasPassword"), ::OpenAPI::toJsonValue(d->has_password));
    }
    if (d->expiration_date_time_isSet) {
        obj.insert(QString("expirationDateTime"), ::OpenAPI::toJsonValue(d->expiration_date_time));
    }
    if (d->created_date_time_isSet) {
        obj.insert(QString("createdDateTime"), ::OpenAPI::toJsonValue(d->created_date_time));
    }
    if (d->granted_to_v2.isSet()) {
        obj.insert(QString("grantedToV2"), ::OpenAPI::toJsonValue(d->granted_to_v2));
    }
    if (d->link.isSet()) {
        obj.insert(QString("link"), ::OpenAPI::toJsonValue(d->link));
    }
    if (d->roles.size() > 0) {
        obj.insert(QString("roles"), ::OpenAPI::toJsonValue(d->roles));
    }
    if (d->granted_to_identities.size() > 0) {
        obj.insert(QString("grantedToIdentities"), ::OpenAPI::toJsonValue(d->granted_to_identities));
    }
    if (d->libre_graph_permissions_actions.size() > 0) {
        obj.insert(QString("@libre.graph.permissions.actions"), ::OpenAPI::toJsonValue(d->libre_graph_permissions_actions));
    }
    if (d->invitation.isSet()) {
        obj.insert(QString("invitation"), ::OpenAPI::toJsonValue(d->invitation));
    }
    return obj;
}

QString OAIPermission::getId() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIPermission::setId(const QString &id) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIPermission::is_id_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIPermission::is_id_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

bool OAIPermission::isHasPassword() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->has_password;
}
void OAIPermission::setHasPassword(const bool &has_password) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->has_password = has_password;
    d->has_password_isSet = true;
}

bool OAIPermission::is_has_password_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->has_password_isSet;
}

bool OAIPermission::is_has_password_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->has_password_isValid;
}

QDateTime OAIPermission::getExpirationDateTime() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->expiration_date_time;
}
void OAIPermission::setExpirationDateTime(const QDateTime &expiration_date_time) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->expiration_date_time = expiration_date_time;
    d->expiration_date_time_isSet = true;
}

bool OAIPermission::is_expiration_date_time_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->expiration_date_time_isSet;
}

bool OAIPermission::is_expiration_date_time_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->expiration_date_time_isValid;
}

QDateTime OAIPermission::getCreatedDateTime() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->created_date_time;
}
void OAIPermission::setCreatedDateTime(const QDateTime &created_date_time) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->created_date_time = created_date_time;
    d->created_date_time_isSet = true;
}

bool OAIPermission::is_created_date_time_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->created_date_time_isSet;
}

bool OAIPermission::is_created_date_time_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->created_date_time_isValid;
}

OAISharePointIdentitySet OAIPermission::getGrantedToV2() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->granted_to_v2;
}
void OAIPermission::setGrantedToV2(const OAISharePointIdentitySet &granted_to_v2) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->granted_to_v2 = granted_to_v2;
    d->granted_to_v2_isSet = true;
}

bool OAIPermission::is_granted_to_v2_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->granted_to_v2_isSet;
}

bool OAIPermission::is_granted_to_v2_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->granted_to_v2_isValid;
}

OAISharingLink OAIPermission::getLink() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->link;
}
void OAIPermission::setLink(const OAISharingLink &link) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->link = link;
    d->link_isSet = true;
}

bool OAIPermission::is_link_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->link_isSet;
}

bool OAIPermission::is_link_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->link_isValid;
}

QList<QString> OAIPermission::getRoles() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->roles;
}
void OAIPermission::setRoles(const QList<QString> &roles) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->roles = roles;
    d->roles_isSet = true;
}

bool OAIPermission::is_roles_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->roles_isSet;
}

bool OAIPermission::is_roles_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->roles_isValid;
}

QList<OAIIdentitySet> OAIPermission::getGrantedToIdentities() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->granted_to_identities;
}
void OAIPermission::setGrantedToIdentities(const QList<OAIIdentitySet> &granted_to_identities) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->granted_to_identities = granted_to_identities;
    d->granted_to_identities_isSet = true;
}

bool OAIPermission::is_granted_to_identities_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->granted_to_identities_isSet;
}

bool OAIPermission::is_granted_to_identities_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->granted_to_identities_isValid;
}

QList<QString> OAIPermission::getLibreGraphPermissionsActions() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->libre_graph_permissions_actions;
}
void OAIPermission::setLibreGraphPermissionsActions(const QList<QString> &libre_graph_permissions_actions) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->libre_graph_permissions_actions = libre_graph_permissions_actions;
    d->libre_graph_permissions_actions_isSet = true;
}

bool OAIPermission::is_libre_graph_permissions_actions_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->libre_graph_permissions_actions_isSet;
}

bool OAIPermission::is_libre_graph_permissions_actions_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->libre_graph_permissions_actions_isValid;
}

OAISharingInvitation OAIPermission::getInvitation() const {
    Q_D(const OAIPermission);
    if(!d){
        return {};
    }
    return d->invitation;
}
void OAIPermission::setInvitation(const OAISharingInvitation &invitation) {
    Q_D(OAIPermission);
    Q_ASSERT(d);

    d->invitation = invitation;
    d->invitation_isSet = true;
}

bool OAIPermission::is_invitation_Set() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }

    return d->invitation_isSet;
}

bool OAIPermission::is_invitation_Valid() const{
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    return d->invitation_isValid;
}

bool OAIPermission::isSet() const {
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->has_password_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->expiration_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->created_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->granted_to_v2.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->link.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (d->roles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->granted_to_identities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->libre_graph_permissions_actions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->invitation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPermission::isValid() const {
    Q_D(const OAIPermission);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
