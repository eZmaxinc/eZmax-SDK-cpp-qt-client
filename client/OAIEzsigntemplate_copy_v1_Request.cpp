/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplate_copy_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_copy_v1_Request::OAIEzsigntemplate_copy_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_copy_v1_Request::OAIEzsigntemplate_copy_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplate_copy_v1_Request::~OAIEzsigntemplate_copy_v1_Request() {}

void OAIEzsigntemplate_copy_v1_Request::initializeModel() {

    m_a_fki_ezsignfoldertype_id_isSet = false;
    m_a_fki_ezsignfoldertype_id_isValid = false;
}

void OAIEzsigntemplate_copy_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_copy_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(a_fki_ezsignfoldertype_id, json[QString("a_fkiEzsignfoldertypeID")]);
    m_a_fki_ezsignfoldertype_id_isSet = !json[QString("a_fkiEzsignfoldertypeID")].isNull() && m_a_fki_ezsignfoldertype_id_isValid;
}

QString OAIEzsigntemplate_copy_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_copy_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_fki_ezsignfoldertype_id.size() > 0) {
        obj.insert(QString("a_fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(a_fki_ezsignfoldertype_id));
    }
    return obj;
}

QList<qint32> OAIEzsigntemplate_copy_v1_Request::getAFkiEzsignfoldertypeId() const {
    return a_fki_ezsignfoldertype_id;
}
void OAIEzsigntemplate_copy_v1_Request::setAFkiEzsignfoldertypeId(const QList<qint32> &a_fki_ezsignfoldertype_id) {
    this->a_fki_ezsignfoldertype_id = a_fki_ezsignfoldertype_id;
    this->m_a_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplate_copy_v1_Request::is_a_fki_ezsignfoldertype_id_Set() const{
    return m_a_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplate_copy_v1_Request::is_a_fki_ezsignfoldertype_id_Valid() const{
    return m_a_fki_ezsignfoldertype_id_isValid;
}

bool OAIEzsigntemplate_copy_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_fki_ezsignfoldertype_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplate_copy_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_fki_ezsignfoldertype_id_isValid && true;
}

} // namespace OpenAPI
