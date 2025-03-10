/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Clonehistory_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Clonehistory_ListElement::Clonehistory_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Clonehistory_ListElement::Clonehistory_ListElement() {
    this->initializeModel();
}

Clonehistory_ListElement::~Clonehistory_ListElement() {}

void Clonehistory_ListElement::initializeModel() {

    m_pki_clonehistory_id_isSet = false;
    m_pki_clonehistory_id_isValid = false;

    m_fki_user_id_cloning_isSet = false;
    m_fki_user_id_cloning_isValid = false;

    m_fki_user_id_cloned_isSet = false;
    m_fki_user_id_cloned_isValid = false;

    m_dt_clonehistory_firsthit_isSet = false;
    m_dt_clonehistory_firsthit_isValid = false;

    m_dt_clonehistory_lasthit_isSet = false;
    m_dt_clonehistory_lasthit_isValid = false;

    m_s_user_loginname_cloning_isSet = false;
    m_s_user_loginname_cloning_isValid = false;

    m_s_user_firstname_cloning_isSet = false;
    m_s_user_firstname_cloning_isValid = false;

    m_s_user_lastname_cloning_isSet = false;
    m_s_user_lastname_cloning_isValid = false;

    m_s_user_loginname_cloned_isSet = false;
    m_s_user_loginname_cloned_isValid = false;

    m_s_user_firstname_cloned_isSet = false;
    m_s_user_firstname_cloned_isValid = false;

    m_s_user_lastname_cloned_isSet = false;
    m_s_user_lastname_cloned_isValid = false;
}

void Clonehistory_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Clonehistory_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_clonehistory_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_clonehistory_id, json[QString("pkiClonehistoryID")]);
    m_pki_clonehistory_id_isSet = !json[QString("pkiClonehistoryID")].isNull() && m_pki_clonehistory_id_isValid;

    m_fki_user_id_cloning_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id_cloning, json[QString("fkiUserIDCloning")]);
    m_fki_user_id_cloning_isSet = !json[QString("fkiUserIDCloning")].isNull() && m_fki_user_id_cloning_isValid;

    m_fki_user_id_cloned_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id_cloned, json[QString("fkiUserIDCloned")]);
    m_fki_user_id_cloned_isSet = !json[QString("fkiUserIDCloned")].isNull() && m_fki_user_id_cloned_isValid;

    m_dt_clonehistory_firsthit_isValid = ::Ezmaxapi::fromJsonValue(m_dt_clonehistory_firsthit, json[QString("dtClonehistoryFirsthit")]);
    m_dt_clonehistory_firsthit_isSet = !json[QString("dtClonehistoryFirsthit")].isNull() && m_dt_clonehistory_firsthit_isValid;

    m_dt_clonehistory_lasthit_isValid = ::Ezmaxapi::fromJsonValue(m_dt_clonehistory_lasthit, json[QString("dtClonehistoryLasthit")]);
    m_dt_clonehistory_lasthit_isSet = !json[QString("dtClonehistoryLasthit")].isNull() && m_dt_clonehistory_lasthit_isValid;

    m_s_user_loginname_cloning_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_loginname_cloning, json[QString("sUserLoginnameCloning")]);
    m_s_user_loginname_cloning_isSet = !json[QString("sUserLoginnameCloning")].isNull() && m_s_user_loginname_cloning_isValid;

    m_s_user_firstname_cloning_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_firstname_cloning, json[QString("sUserFirstnameCloning")]);
    m_s_user_firstname_cloning_isSet = !json[QString("sUserFirstnameCloning")].isNull() && m_s_user_firstname_cloning_isValid;

    m_s_user_lastname_cloning_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_lastname_cloning, json[QString("sUserLastnameCloning")]);
    m_s_user_lastname_cloning_isSet = !json[QString("sUserLastnameCloning")].isNull() && m_s_user_lastname_cloning_isValid;

    m_s_user_loginname_cloned_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_loginname_cloned, json[QString("sUserLoginnameCloned")]);
    m_s_user_loginname_cloned_isSet = !json[QString("sUserLoginnameCloned")].isNull() && m_s_user_loginname_cloned_isValid;

    m_s_user_firstname_cloned_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_firstname_cloned, json[QString("sUserFirstnameCloned")]);
    m_s_user_firstname_cloned_isSet = !json[QString("sUserFirstnameCloned")].isNull() && m_s_user_firstname_cloned_isValid;

    m_s_user_lastname_cloned_isValid = ::Ezmaxapi::fromJsonValue(m_s_user_lastname_cloned, json[QString("sUserLastnameCloned")]);
    m_s_user_lastname_cloned_isSet = !json[QString("sUserLastnameCloned")].isNull() && m_s_user_lastname_cloned_isValid;
}

QString Clonehistory_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Clonehistory_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_clonehistory_id_isSet) {
        obj.insert(QString("pkiClonehistoryID"), ::Ezmaxapi::toJsonValue(m_pki_clonehistory_id));
    }
    if (m_fki_user_id_cloning_isSet) {
        obj.insert(QString("fkiUserIDCloning"), ::Ezmaxapi::toJsonValue(m_fki_user_id_cloning));
    }
    if (m_fki_user_id_cloned_isSet) {
        obj.insert(QString("fkiUserIDCloned"), ::Ezmaxapi::toJsonValue(m_fki_user_id_cloned));
    }
    if (m_dt_clonehistory_firsthit_isSet) {
        obj.insert(QString("dtClonehistoryFirsthit"), ::Ezmaxapi::toJsonValue(m_dt_clonehistory_firsthit));
    }
    if (m_dt_clonehistory_lasthit_isSet) {
        obj.insert(QString("dtClonehistoryLasthit"), ::Ezmaxapi::toJsonValue(m_dt_clonehistory_lasthit));
    }
    if (m_s_user_loginname_cloning_isSet) {
        obj.insert(QString("sUserLoginnameCloning"), ::Ezmaxapi::toJsonValue(m_s_user_loginname_cloning));
    }
    if (m_s_user_firstname_cloning_isSet) {
        obj.insert(QString("sUserFirstnameCloning"), ::Ezmaxapi::toJsonValue(m_s_user_firstname_cloning));
    }
    if (m_s_user_lastname_cloning_isSet) {
        obj.insert(QString("sUserLastnameCloning"), ::Ezmaxapi::toJsonValue(m_s_user_lastname_cloning));
    }
    if (m_s_user_loginname_cloned_isSet) {
        obj.insert(QString("sUserLoginnameCloned"), ::Ezmaxapi::toJsonValue(m_s_user_loginname_cloned));
    }
    if (m_s_user_firstname_cloned_isSet) {
        obj.insert(QString("sUserFirstnameCloned"), ::Ezmaxapi::toJsonValue(m_s_user_firstname_cloned));
    }
    if (m_s_user_lastname_cloned_isSet) {
        obj.insert(QString("sUserLastnameCloned"), ::Ezmaxapi::toJsonValue(m_s_user_lastname_cloned));
    }
    return obj;
}

qint32 Clonehistory_ListElement::getPkiClonehistoryId() const {
    return m_pki_clonehistory_id;
}
void Clonehistory_ListElement::setPkiClonehistoryId(const qint32 &pki_clonehistory_id) {
    m_pki_clonehistory_id = pki_clonehistory_id;
    m_pki_clonehistory_id_isSet = true;
}

bool Clonehistory_ListElement::is_pki_clonehistory_id_Set() const{
    return m_pki_clonehistory_id_isSet;
}

bool Clonehistory_ListElement::is_pki_clonehistory_id_Valid() const{
    return m_pki_clonehistory_id_isValid;
}

qint32 Clonehistory_ListElement::getFkiUserIdCloning() const {
    return m_fki_user_id_cloning;
}
void Clonehistory_ListElement::setFkiUserIdCloning(const qint32 &fki_user_id_cloning) {
    m_fki_user_id_cloning = fki_user_id_cloning;
    m_fki_user_id_cloning_isSet = true;
}

bool Clonehistory_ListElement::is_fki_user_id_cloning_Set() const{
    return m_fki_user_id_cloning_isSet;
}

bool Clonehistory_ListElement::is_fki_user_id_cloning_Valid() const{
    return m_fki_user_id_cloning_isValid;
}

qint32 Clonehistory_ListElement::getFkiUserIdCloned() const {
    return m_fki_user_id_cloned;
}
void Clonehistory_ListElement::setFkiUserIdCloned(const qint32 &fki_user_id_cloned) {
    m_fki_user_id_cloned = fki_user_id_cloned;
    m_fki_user_id_cloned_isSet = true;
}

bool Clonehistory_ListElement::is_fki_user_id_cloned_Set() const{
    return m_fki_user_id_cloned_isSet;
}

bool Clonehistory_ListElement::is_fki_user_id_cloned_Valid() const{
    return m_fki_user_id_cloned_isValid;
}

QString Clonehistory_ListElement::getDtClonehistoryFirsthit() const {
    return m_dt_clonehistory_firsthit;
}
void Clonehistory_ListElement::setDtClonehistoryFirsthit(const QString &dt_clonehistory_firsthit) {
    m_dt_clonehistory_firsthit = dt_clonehistory_firsthit;
    m_dt_clonehistory_firsthit_isSet = true;
}

bool Clonehistory_ListElement::is_dt_clonehistory_firsthit_Set() const{
    return m_dt_clonehistory_firsthit_isSet;
}

bool Clonehistory_ListElement::is_dt_clonehistory_firsthit_Valid() const{
    return m_dt_clonehistory_firsthit_isValid;
}

QString Clonehistory_ListElement::getDtClonehistoryLasthit() const {
    return m_dt_clonehistory_lasthit;
}
void Clonehistory_ListElement::setDtClonehistoryLasthit(const QString &dt_clonehistory_lasthit) {
    m_dt_clonehistory_lasthit = dt_clonehistory_lasthit;
    m_dt_clonehistory_lasthit_isSet = true;
}

bool Clonehistory_ListElement::is_dt_clonehistory_lasthit_Set() const{
    return m_dt_clonehistory_lasthit_isSet;
}

bool Clonehistory_ListElement::is_dt_clonehistory_lasthit_Valid() const{
    return m_dt_clonehistory_lasthit_isValid;
}

QString Clonehistory_ListElement::getSUserLoginnameCloning() const {
    return m_s_user_loginname_cloning;
}
void Clonehistory_ListElement::setSUserLoginnameCloning(const QString &s_user_loginname_cloning) {
    m_s_user_loginname_cloning = s_user_loginname_cloning;
    m_s_user_loginname_cloning_isSet = true;
}

bool Clonehistory_ListElement::is_s_user_loginname_cloning_Set() const{
    return m_s_user_loginname_cloning_isSet;
}

bool Clonehistory_ListElement::is_s_user_loginname_cloning_Valid() const{
    return m_s_user_loginname_cloning_isValid;
}

QString Clonehistory_ListElement::getSUserFirstnameCloning() const {
    return m_s_user_firstname_cloning;
}
void Clonehistory_ListElement::setSUserFirstnameCloning(const QString &s_user_firstname_cloning) {
    m_s_user_firstname_cloning = s_user_firstname_cloning;
    m_s_user_firstname_cloning_isSet = true;
}

bool Clonehistory_ListElement::is_s_user_firstname_cloning_Set() const{
    return m_s_user_firstname_cloning_isSet;
}

bool Clonehistory_ListElement::is_s_user_firstname_cloning_Valid() const{
    return m_s_user_firstname_cloning_isValid;
}

QString Clonehistory_ListElement::getSUserLastnameCloning() const {
    return m_s_user_lastname_cloning;
}
void Clonehistory_ListElement::setSUserLastnameCloning(const QString &s_user_lastname_cloning) {
    m_s_user_lastname_cloning = s_user_lastname_cloning;
    m_s_user_lastname_cloning_isSet = true;
}

bool Clonehistory_ListElement::is_s_user_lastname_cloning_Set() const{
    return m_s_user_lastname_cloning_isSet;
}

bool Clonehistory_ListElement::is_s_user_lastname_cloning_Valid() const{
    return m_s_user_lastname_cloning_isValid;
}

QString Clonehistory_ListElement::getSUserLoginnameCloned() const {
    return m_s_user_loginname_cloned;
}
void Clonehistory_ListElement::setSUserLoginnameCloned(const QString &s_user_loginname_cloned) {
    m_s_user_loginname_cloned = s_user_loginname_cloned;
    m_s_user_loginname_cloned_isSet = true;
}

bool Clonehistory_ListElement::is_s_user_loginname_cloned_Set() const{
    return m_s_user_loginname_cloned_isSet;
}

bool Clonehistory_ListElement::is_s_user_loginname_cloned_Valid() const{
    return m_s_user_loginname_cloned_isValid;
}

QString Clonehistory_ListElement::getSUserFirstnameCloned() const {
    return m_s_user_firstname_cloned;
}
void Clonehistory_ListElement::setSUserFirstnameCloned(const QString &s_user_firstname_cloned) {
    m_s_user_firstname_cloned = s_user_firstname_cloned;
    m_s_user_firstname_cloned_isSet = true;
}

bool Clonehistory_ListElement::is_s_user_firstname_cloned_Set() const{
    return m_s_user_firstname_cloned_isSet;
}

bool Clonehistory_ListElement::is_s_user_firstname_cloned_Valid() const{
    return m_s_user_firstname_cloned_isValid;
}

QString Clonehistory_ListElement::getSUserLastnameCloned() const {
    return m_s_user_lastname_cloned;
}
void Clonehistory_ListElement::setSUserLastnameCloned(const QString &s_user_lastname_cloned) {
    m_s_user_lastname_cloned = s_user_lastname_cloned;
    m_s_user_lastname_cloned_isSet = true;
}

bool Clonehistory_ListElement::is_s_user_lastname_cloned_Set() const{
    return m_s_user_lastname_cloned_isSet;
}

bool Clonehistory_ListElement::is_s_user_lastname_cloned_Valid() const{
    return m_s_user_lastname_cloned_isValid;
}

bool Clonehistory_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_clonehistory_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_cloning_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_cloned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_clonehistory_firsthit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_clonehistory_lasthit_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_loginname_cloning_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_cloning_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_cloning_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_loginname_cloned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_cloned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_cloned_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Clonehistory_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_clonehistory_id_isValid && m_fki_user_id_cloning_isValid && m_fki_user_id_cloned_isValid && m_dt_clonehistory_firsthit_isValid && m_s_user_loginname_cloning_isValid && m_s_user_firstname_cloning_isValid && m_s_user_lastname_cloning_isValid && m_s_user_loginname_cloned_isValid && m_s_user_firstname_cloned_isValid && m_s_user_lastname_cloned_isValid && true;
}

} // namespace Ezmaxapi
