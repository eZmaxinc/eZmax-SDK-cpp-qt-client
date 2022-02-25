/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFranchisereferalincome_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFranchisereferalincome_createObject_v2_Request::OAIFranchisereferalincome_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFranchisereferalincome_createObject_v2_Request::OAIFranchisereferalincome_createObject_v2_Request() {
    this->initializeModel();
}

OAIFranchisereferalincome_createObject_v2_Request::~OAIFranchisereferalincome_createObject_v2_Request() {}

void OAIFranchisereferalincome_createObject_v2_Request::initializeModel() {

    m_a_obj_franchisereferalincome_isSet = false;
    m_a_obj_franchisereferalincome_isValid = false;
}

void OAIFranchisereferalincome_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFranchisereferalincome_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_franchisereferalincome_isValid = ::OpenAPI::fromJsonValue(a_obj_franchisereferalincome, json[QString("a_objFranchisereferalincome")]);
    m_a_obj_franchisereferalincome_isSet = !json[QString("a_objFranchisereferalincome")].isNull() && m_a_obj_franchisereferalincome_isValid;
}

QString OAIFranchisereferalincome_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFranchisereferalincome_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_franchisereferalincome.size() > 0) {
        obj.insert(QString("a_objFranchisereferalincome"), ::OpenAPI::toJsonValue(a_obj_franchisereferalincome));
    }
    return obj;
}

QList<OAIFranchisereferalincome_RequestCompound> OAIFranchisereferalincome_createObject_v2_Request::getAObjFranchisereferalincome() const {
    return a_obj_franchisereferalincome;
}
void OAIFranchisereferalincome_createObject_v2_Request::setAObjFranchisereferalincome(const QList<OAIFranchisereferalincome_RequestCompound> &a_obj_franchisereferalincome) {
    this->a_obj_franchisereferalincome = a_obj_franchisereferalincome;
    this->m_a_obj_franchisereferalincome_isSet = true;
}

bool OAIFranchisereferalincome_createObject_v2_Request::is_a_obj_franchisereferalincome_Set() const{
    return m_a_obj_franchisereferalincome_isSet;
}

bool OAIFranchisereferalincome_createObject_v2_Request::is_a_obj_franchisereferalincome_Valid() const{
    return m_a_obj_franchisereferalincome_isValid;
}

bool OAIFranchisereferalincome_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_franchisereferalincome.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFranchisereferalincome_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_franchisereferalincome_isValid && true;
}

} // namespace OpenAPI