/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackagesignermembership_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::OAIEzsigntemplatepackagesignermembership_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::OAIEzsigntemplatepackagesignermembership_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::~OAIEzsigntemplatepackagesignermembership_createObject_v1_Request() {}

void OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplatepackagesignermembership_isSet = false;
    m_a_obj_ezsigntemplatepackagesignermembership_isValid = false;
}

void OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatepackagesignermembership_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatepackagesignermembership, json[QString("a_objEzsigntemplatepackagesignermembership")]);
    m_a_obj_ezsigntemplatepackagesignermembership_isSet = !json[QString("a_objEzsigntemplatepackagesignermembership")].isNull() && m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

QString OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackagesignermembership"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatepackagesignermembership));
    }
    return obj;
}

QList<OAIEzsigntemplatepackagesignermembership_RequestCompound> OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::getAObjEzsigntemplatepackagesignermembership() const {
    return a_obj_ezsigntemplatepackagesignermembership;
}
void OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::setAObjEzsigntemplatepackagesignermembership(const QList<OAIEzsigntemplatepackagesignermembership_RequestCompound> &a_obj_ezsigntemplatepackagesignermembership) {
    this->a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;
    this->m_a_obj_ezsigntemplatepackagesignermembership_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::is_a_obj_ezsigntemplatepackagesignermembership_Set() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::is_a_obj_ezsigntemplatepackagesignermembership_Valid() const{
    return m_a_obj_ezsigntemplatepackagesignermembership_isValid;
}

bool OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplatepackagesignermembership.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagesignermembership_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatepackagesignermembership_isValid && true;
}

} // namespace OpenAPI