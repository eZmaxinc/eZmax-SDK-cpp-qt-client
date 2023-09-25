/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigntemplate_copy_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplate_copy_v1_Request::Ezsigntemplate_copy_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplate_copy_v1_Request::Ezsigntemplate_copy_v1_Request() {
    this->initializeModel();
}

Ezsigntemplate_copy_v1_Request::~Ezsigntemplate_copy_v1_Request() {}

void Ezsigntemplate_copy_v1_Request::initializeModel() {

    m_a_fki_ezsignfoldertype_id_isSet = false;
    m_a_fki_ezsignfoldertype_id_isValid = false;
}

void Ezsigntemplate_copy_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplate_copy_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_a_fki_ezsignfoldertype_id, json[QString("a_fkiEzsignfoldertypeID")]);
    m_a_fki_ezsignfoldertype_id_isSet = !json[QString("a_fkiEzsignfoldertypeID")].isNull() && m_a_fki_ezsignfoldertype_id_isValid;
}

QString Ezsigntemplate_copy_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplate_copy_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_fki_ezsignfoldertype_id.size() > 0) {
        obj.insert(QString("a_fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_a_fki_ezsignfoldertype_id));
    }
    return obj;
}

QList<qint32> Ezsigntemplate_copy_v1_Request::getAFkiEzsignfoldertypeId() const {
    return m_a_fki_ezsignfoldertype_id;
}
void Ezsigntemplate_copy_v1_Request::setAFkiEzsignfoldertypeId(const QList<qint32> &a_fki_ezsignfoldertype_id) {
    m_a_fki_ezsignfoldertype_id = a_fki_ezsignfoldertype_id;
    m_a_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsigntemplate_copy_v1_Request::is_a_fki_ezsignfoldertype_id_Set() const{
    return m_a_fki_ezsignfoldertype_id_isSet;
}

bool Ezsigntemplate_copy_v1_Request::is_a_fki_ezsignfoldertype_id_Valid() const{
    return m_a_fki_ezsignfoldertype_id_isValid;
}

bool Ezsigntemplate_copy_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_fki_ezsignfoldertype_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplate_copy_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_fki_ezsignfoldertype_id_isValid && true;
}

} // namespace Ezmaxapi
