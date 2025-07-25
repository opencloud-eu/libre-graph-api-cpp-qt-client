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

#include "OAISignInActivity.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAISignInActivityPrivate {
    friend class OAISignInActivity;

     QDateTime last_successful_sign_in_date_time;
     bool last_successful_sign_in_date_time_isSet;
     bool last_successful_sign_in_date_time_isValid;
};

OAISignInActivity::OAISignInActivity()
    : d_ptr()
{
}

OAISignInActivity::OAISignInActivity(const OAISignInActivity& other)
    : d_ptr(other.d_ptr)
{
}

OAISignInActivity::OAISignInActivity(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAISignInActivity::~OAISignInActivity() = default;

void OAISignInActivity::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAISignInActivityPrivate{});

        Q_D(OAISignInActivity);


        d->last_successful_sign_in_date_time_isSet = false;
        d->last_successful_sign_in_date_time_isValid = false;
    }
}

void OAISignInActivity::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISignInActivity::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAISignInActivity);

    d->last_successful_sign_in_date_time_isValid = ::OpenAPI::fromJsonValue(d->last_successful_sign_in_date_time, json[QString("lastSuccessfulSignInDateTime")]);
    d->last_successful_sign_in_date_time_isSet = !json[QString("lastSuccessfulSignInDateTime")].isNull() && d->last_successful_sign_in_date_time_isValid;
}

QString OAISignInActivity::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISignInActivity::asJsonObject() const {
    Q_D(const OAISignInActivity);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->last_successful_sign_in_date_time_isSet) {
        obj.insert(QString("lastSuccessfulSignInDateTime"), ::OpenAPI::toJsonValue(d->last_successful_sign_in_date_time));
    }
    return obj;
}

QDateTime OAISignInActivity::getLastSuccessfulSignInDateTime() const {
    Q_D(const OAISignInActivity);
    if(!d){
        return {};
    }
    return d->last_successful_sign_in_date_time;
}
void OAISignInActivity::setLastSuccessfulSignInDateTime(const QDateTime &last_successful_sign_in_date_time) {
    Q_D(OAISignInActivity);
    Q_ASSERT(d);

    d->last_successful_sign_in_date_time = last_successful_sign_in_date_time;
    d->last_successful_sign_in_date_time_isSet = true;
}

bool OAISignInActivity::is_last_successful_sign_in_date_time_Set() const{
    Q_D(const OAISignInActivity);
    if(!d){
        return false;
    }

    return d->last_successful_sign_in_date_time_isSet;
}

bool OAISignInActivity::is_last_successful_sign_in_date_time_Valid() const{
    Q_D(const OAISignInActivity);
    if(!d){
        return false;
    }
    return d->last_successful_sign_in_date_time_isValid;
}

bool OAISignInActivity::isSet() const {
    Q_D(const OAISignInActivity);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->last_successful_sign_in_date_time_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISignInActivity::isValid() const {
    Q_D(const OAISignInActivity);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
