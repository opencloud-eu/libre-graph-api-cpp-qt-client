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

#include "OAIEducationSchool.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

class OAIEducationSchoolPrivate {
    friend class OAIEducationSchool;

     QString id;
     bool id_isSet;
     bool id_isValid;

     QString display_name;
     bool display_name_isSet;
     bool display_name_isValid;

     QString school_number;
     bool school_number_isSet;
     bool school_number_isValid;

     QDateTime termination_date;
     bool termination_date_isSet;
     bool termination_date_isValid;
};

OAIEducationSchool::OAIEducationSchool()
    : d_ptr()
{
}

OAIEducationSchool::OAIEducationSchool(const OAIEducationSchool& other)
    : d_ptr(other.d_ptr)
{
}

OAIEducationSchool::OAIEducationSchool(QString json)
    : d_ptr(nullptr)
{
    this->fromJson(json);
}

OAIEducationSchool::~OAIEducationSchool() = default;

void OAIEducationSchool::initializeModel() {
    if (d_ptr == nullptr) {
        d_ptr.reset(new OAIEducationSchoolPrivate{});

        Q_D(OAIEducationSchool);


        d->id_isSet = false;
        d->id_isValid = false;

        d->display_name_isSet = false;
        d->display_name_isValid = false;

        d->school_number_isSet = false;
        d->school_number_isValid = false;

        d->termination_date_isSet = false;
        d->termination_date_isValid = false;
    }
}

void OAIEducationSchool::fromJson(QString jsonString) {
    QByteArray array(jsonString.toUtf8());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEducationSchool::fromJsonObject(QJsonObject json) {
    initializeModel();

    Q_D(OAIEducationSchool);

    d->id_isValid = ::OpenAPI::fromJsonValue(d->id, json[QString("id")]);
    d->id_isSet = !json[QString("id")].isNull() && d->id_isValid;

    d->display_name_isValid = ::OpenAPI::fromJsonValue(d->display_name, json[QString("displayName")]);
    d->display_name_isSet = !json[QString("displayName")].isNull() && d->display_name_isValid;

    d->school_number_isValid = ::OpenAPI::fromJsonValue(d->school_number, json[QString("schoolNumber")]);
    d->school_number_isSet = !json[QString("schoolNumber")].isNull() && d->school_number_isValid;

    d->termination_date_isValid = ::OpenAPI::fromJsonValue(d->termination_date, json[QString("terminationDate")]);
    d->termination_date_isSet = !json[QString("terminationDate")].isNull() && d->termination_date_isValid;
}

QString OAIEducationSchool::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEducationSchool::asJsonObject() const {
    Q_D(const OAIEducationSchool);
    if(!d){
        return {};
    }
    QJsonObject obj;
    if (d->id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(d->id));
    }
    if (d->display_name_isSet) {
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(d->display_name));
    }
    if (d->school_number_isSet) {
        obj.insert(QString("schoolNumber"), ::OpenAPI::toJsonValue(d->school_number));
    }
    if (d->termination_date_isSet) {
        obj.insert(QString("terminationDate"), ::OpenAPI::toJsonValue(d->termination_date));
    }
    return obj;
}

QString OAIEducationSchool::getId() const {
    Q_D(const OAIEducationSchool);
    if(!d){
        return {};
    }
    return d->id;
}
void OAIEducationSchool::setId(const QString &id) {
    Q_D(OAIEducationSchool);
    Q_ASSERT(d);

    d->id = id;
    d->id_isSet = true;
}

bool OAIEducationSchool::is_id_Set() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }

    return d->id_isSet;
}

bool OAIEducationSchool::is_id_Valid() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }
    return d->id_isValid;
}

QString OAIEducationSchool::getDisplayName() const {
    Q_D(const OAIEducationSchool);
    if(!d){
        return {};
    }
    return d->display_name;
}
void OAIEducationSchool::setDisplayName(const QString &display_name) {
    Q_D(OAIEducationSchool);
    Q_ASSERT(d);

    d->display_name = display_name;
    d->display_name_isSet = true;
}

bool OAIEducationSchool::is_display_name_Set() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }

    return d->display_name_isSet;
}

bool OAIEducationSchool::is_display_name_Valid() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }
    return d->display_name_isValid;
}

QString OAIEducationSchool::getSchoolNumber() const {
    Q_D(const OAIEducationSchool);
    if(!d){
        return {};
    }
    return d->school_number;
}
void OAIEducationSchool::setSchoolNumber(const QString &school_number) {
    Q_D(OAIEducationSchool);
    Q_ASSERT(d);

    d->school_number = school_number;
    d->school_number_isSet = true;
}

bool OAIEducationSchool::is_school_number_Set() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }

    return d->school_number_isSet;
}

bool OAIEducationSchool::is_school_number_Valid() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }
    return d->school_number_isValid;
}

QDateTime OAIEducationSchool::getTerminationDate() const {
    Q_D(const OAIEducationSchool);
    if(!d){
        return {};
    }
    return d->termination_date;
}
void OAIEducationSchool::setTerminationDate(const QDateTime &termination_date) {
    Q_D(OAIEducationSchool);
    Q_ASSERT(d);

    d->termination_date = termination_date;
    d->termination_date_isSet = true;
}

bool OAIEducationSchool::is_termination_date_Set() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }

    return d->termination_date_isSet;
}

bool OAIEducationSchool::is_termination_date_Valid() const{
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }
    return d->termination_date_isValid;
}

bool OAIEducationSchool::isSet() const {
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }
    bool isObjectUpdated = false;
    do {
        if (d->id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->display_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->school_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (d->termination_date_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEducationSchool::isValid() const {
    Q_D(const OAIEducationSchool);
    if(!d){
        return false;
    }
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
