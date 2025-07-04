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

#include "OAIOdata_error_main.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIOdata_error_mainPrivate {
    friend class OAIOdata_error_main;

     QString code;
     bool code_isSet;
     bool code_isValid;

     QString message;
     bool message_isSet;
     bool message_isValid;

     QString target;
     bool target_isSet;
     bool target_isValid;

     QList<OAIOdata_error_detail> details;
     bool details_isSet;
     bool details_isValid;

     OAIObject innererror;
     bool innererror_isSet;
     bool innererror_isValid;
};

OAIOdata_error_main::OAIOdata_error_main()
    : d_ptr()
{
}

OAIOdata_error_main::OAIOdata_error_main(const OAIOdata_error_main& other)
    : d_ptr(other.d_ptr)
{
}

OAIOdata_error_main::OAIOdata_error_main(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIOdata_error_main::~OAIOdata_error_main() = default;

void OAIOdata_error_main::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIOdata_error_mainPrivate{});

        Q_D(OAIOdata_error_main);


        d->code_isSet = false;
        d->code_isValid = false;

        d->message_isSet = false;
        d->message_isValid = false;

        d->target_isSet = false;
        d->target_isValid = false;

        d->details_isSet = false;
        d->details_isValid = false;

        d->innererror_isSet = false;
        d->innererror_isValid = false;
    }
}

void OAIOdata_error_main::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOdata_error_main::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIOdata_error_main);

    d->code_isValid = ::OpenAPI::fromJsonValue(d->code, json[QString("code")]);
    d->code_isSet = !json[QString("code")].isNull() && d->code_isValid;

    d->message_isValid = ::OpenAPI::fromJsonValue(d->message, json[QString("message")]);
    d->message_isSet = !json[QString("message")].isNull() && d->message_isValid;

    d->target_isValid = ::OpenAPI::fromJsonValue(d->target, json[QString("target")]);
    d->target_isSet = !json[QString("target")].isNull() && d->target_isValid;

    d->details_isValid = ::OpenAPI::fromJsonValue(d->details, json[QString("details")]);
    d->details_isSet = !json[QString("details")].isNull() && d->details_isValid;

    d->innererror_isValid = ::OpenAPI::fromJsonValue(d->innererror, json[QString("innererror")]);
    d->innererror_isSet = !json[QString("innererror")].isNull() && d->innererror_isValid;
}

QString OAIOdata_error_main::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOdata_error_main::asJsonObject() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->code_isSet) {
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(d->code));
    }
    if (d->message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(d->message));
    }
    if (d->target_isSet) {
        obj.insert(QString("target"), ::OpenAPI::toJsonValue(d->target));
    }
    if (d->details.size() > 0) {
        obj.insert(QString("details"), ::OpenAPI::toJsonValue(d->details));
    }
    if (d->innererror_isSet) {
        obj.insert(QString("innererror"), ::OpenAPI::toJsonValue(d->innererror));
    }
    return obj;
}

QString OAIOdata_error_main::getCode() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return {};
    }
    return d->code;
}
void OAIOdata_error_main::setCode(const QString &code) {
    Q_D(OAIOdata_error_main);
    Q_ASSERT(d);

    d->code = code;
    d->code_isSet = true;
}

bool OAIOdata_error_main::is_code_Set() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }

    return d->code_isSet;
}

bool OAIOdata_error_main::is_code_Valid() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }
    return d->code_isValid;
}

QString OAIOdata_error_main::getMessage() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return {};
    }
    return d->message;
}
void OAIOdata_error_main::setMessage(const QString &message) {
    Q_D(OAIOdata_error_main);
    Q_ASSERT(d);

    d->message = message;
    d->message_isSet = true;
}

bool OAIOdata_error_main::is_message_Set() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }

    return d->message_isSet;
}

bool OAIOdata_error_main::is_message_Valid() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }
    return d->message_isValid;
}

QString OAIOdata_error_main::getTarget() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return {};
    }
    return d->target;
}
void OAIOdata_error_main::setTarget(const QString &target) {
    Q_D(OAIOdata_error_main);
    Q_ASSERT(d);

    d->target = target;
    d->target_isSet = true;
}

bool OAIOdata_error_main::is_target_Set() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }

    return d->target_isSet;
}

bool OAIOdata_error_main::is_target_Valid() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }
    return d->target_isValid;
}

QList<OAIOdata_error_detail> OAIOdata_error_main::getDetails() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return {};
    }
    return d->details;
}
void OAIOdata_error_main::setDetails(const QList<OAIOdata_error_detail> &details) {
    Q_D(OAIOdata_error_main);
    Q_ASSERT(d);

    d->details = details;
    d->details_isSet = true;
}

bool OAIOdata_error_main::is_details_Set() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }

    return d->details_isSet;
}

bool OAIOdata_error_main::is_details_Valid() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }
    return d->details_isValid;
}

OAIObject OAIOdata_error_main::getInnererror() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return {};
    }
    return d->innererror;
}
void OAIOdata_error_main::setInnererror(const OAIObject &innererror) {
    Q_D(OAIOdata_error_main);
    Q_ASSERT(d);

    d->innererror = innererror;
    d->innererror_isSet = true;
}

bool OAIOdata_error_main::is_innererror_Set() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }

    return d->innererror_isSet;
}

bool OAIOdata_error_main::is_innererror_Valid() const{
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }
    return d->innererror_isValid;
}

bool OAIOdata_error_main::isSet() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->target_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->details.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (d->innererror_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOdata_error_main::isValid() const {
    Q_D(const OAIOdata_error_main);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return d->code_isValid && d->message_isValid && true;
}

} // namespace OpenAPI
