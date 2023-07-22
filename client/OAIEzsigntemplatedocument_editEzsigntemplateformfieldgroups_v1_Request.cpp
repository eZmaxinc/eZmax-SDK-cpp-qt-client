/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::~OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request() {}

void OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplateformfieldgroup_isSet = false;
    m_a_obj_ezsigntemplateformfieldgroup_isValid = false;
}

void OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplateformfieldgroup_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplateformfieldgroup, json[QString("a_objEzsigntemplateformfieldgroup")]);
    m_a_obj_ezsigntemplateformfieldgroup_isSet = !json[QString("a_objEzsigntemplateformfieldgroup")].isNull() && m_a_obj_ezsigntemplateformfieldgroup_isValid;
}

QString OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplateformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateformfieldgroup"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplateformfieldgroup));
    }
    return obj;
}

QList<OAIEzsigntemplateformfieldgroup_RequestCompound> OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::getAObjEzsigntemplateformfieldgroup() const {
    return a_obj_ezsigntemplateformfieldgroup;
}
void OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::setAObjEzsigntemplateformfieldgroup(const QList<OAIEzsigntemplateformfieldgroup_RequestCompound> &a_obj_ezsigntemplateformfieldgroup) {
    this->a_obj_ezsigntemplateformfieldgroup = a_obj_ezsigntemplateformfieldgroup;
    this->m_a_obj_ezsigntemplateformfieldgroup_isSet = true;
}

bool OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::is_a_obj_ezsigntemplateformfieldgroup_Set() const{
    return m_a_obj_ezsigntemplateformfieldgroup_isSet;
}

bool OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::is_a_obj_ezsigntemplateformfieldgroup_Valid() const{
    return m_a_obj_ezsigntemplateformfieldgroup_isValid;
}

bool OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplateformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplateformfieldgroup_isValid && true;
}

} // namespace OpenAPI
