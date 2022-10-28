/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksendsignermapping_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksendsignermapping_createObject_v1_Request::OAIEzsignbulksendsignermapping_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksendsignermapping_createObject_v1_Request::OAIEzsignbulksendsignermapping_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignbulksendsignermapping_createObject_v1_Request::~OAIEzsignbulksendsignermapping_createObject_v1_Request() {}

void OAIEzsignbulksendsignermapping_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsignbulksendsignermapping_isSet = false;
    m_a_obj_ezsignbulksendsignermapping_isValid = false;
}

void OAIEzsignbulksendsignermapping_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksendsignermapping_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignbulksendsignermapping_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignbulksendsignermapping, json[QString("a_objEzsignbulksendsignermapping")]);
    m_a_obj_ezsignbulksendsignermapping_isSet = !json[QString("a_objEzsignbulksendsignermapping")].isNull() && m_a_obj_ezsignbulksendsignermapping_isValid;
}

QString OAIEzsignbulksendsignermapping_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksendsignermapping_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignbulksendsignermapping.size() > 0) {
        obj.insert(QString("a_objEzsignbulksendsignermapping"), ::OpenAPI::toJsonValue(a_obj_ezsignbulksendsignermapping));
    }
    return obj;
}

QList<OAIEzsignbulksendsignermapping_RequestCompound> OAIEzsignbulksendsignermapping_createObject_v1_Request::getAObjEzsignbulksendsignermapping() const {
    return a_obj_ezsignbulksendsignermapping;
}
void OAIEzsignbulksendsignermapping_createObject_v1_Request::setAObjEzsignbulksendsignermapping(const QList<OAIEzsignbulksendsignermapping_RequestCompound> &a_obj_ezsignbulksendsignermapping) {
    this->a_obj_ezsignbulksendsignermapping = a_obj_ezsignbulksendsignermapping;
    this->m_a_obj_ezsignbulksendsignermapping_isSet = true;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Request::is_a_obj_ezsignbulksendsignermapping_Set() const{
    return m_a_obj_ezsignbulksendsignermapping_isSet;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Request::is_a_obj_ezsignbulksendsignermapping_Valid() const{
    return m_a_obj_ezsignbulksendsignermapping_isValid;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignbulksendsignermapping.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksendsignermapping_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignbulksendsignermapping_isValid && true;
}

} // namespace OpenAPI
